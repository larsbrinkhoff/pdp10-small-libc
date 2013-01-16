#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include "fd.h"

FILE *
fopen (const char *name, const char *mode)
{
  int fd, flags = 0;

  mode--;
  for (;;)
    switch (*++mode)
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
      case '+':
	if (flags & O_WRONLY)
	  flags |= O_CREAT | O_TRUNC;
	else if (flags & O_APPEND)
	  flags |= O_CREAT;
	break;
      case 'b':
	flags |= O_BINARY;
	break;
	goto done;
      default:
	errno = EINVAL;
	return NULL;
      }
 done:

  fd = open (name, flags);
  if (fd == -1)
    return NULL;

  return fdopen (fd, mode);
}
