#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include "fd.h"

FILE *
fdopen (int fd, const char *mode)
{
  int i, flags = 0;

  for (;;)
    switch (*mode++)
      {
      case 'r':
	flags |= O_RDONLY;
	break;
      case 'a':
	flags |= O_APPEND;
	break;
      case 'w':
	flags |= O_WRONLY;
	break;
      case 'b':
	flags |= O_BINARY;
	break;
      case 0:
	goto done;
      default:
	errno = EINVAL;
	return NULL;
      }
 done:

  for (i = 0; i < _STDIO_MAXFILES; i++)
    if (!(_files[i].flags & _STDIO_USED))
      goto found;
  errno = EMFILE;
  return NULL;

 found:
  _files[i].fd = fd;
  _files[i].flags = _STDIO_USED;
  if (!(flags & O_BINARY))
    _files[i].flags |= _STDIO_TEXT;
  _files[i].ungetc_buf = EOF;

  return &_files[i];
}
