#include <stdio.h>
#include <string.h>
#include "fd.h"
#include "monsym.h"

FILE _files[_STDIO_MAXFILES];
_fd_t _fds[_MAXFDS];
FILE *stdin, *stdout, *stderr;

void
_libc_init (void)
{
  int i;

  _fds[0].jfn = _PRIIN;
  _fds[0].flags = _FD_USED;
  _fds[1].jfn = _PRIOU;
  _fds[1].flags = _FD_USED;
  _fds[2].jfn = _PRIOU;
  _fds[2].flags = _FD_USED;

  for (i = 3; i < _MAXFDS; i++)
    _fds[i].flags = 0;

  for (i = 0; i < _STDIO_MAXFILES; i++)
    _files[i].flags = 0;

  stdin = fdopen (0, "r");
  stdout = fdopen (1, "w");
  stderr = fdopen (2, "w");
}

void
__main (void)
{
}
