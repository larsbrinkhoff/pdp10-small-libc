#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef void (*F) (void);
F _atexit_fn[10];

void
exit (int code)
{
  int i;

  for (i = 9; i >= 0; i--)
    if (_atexit_fn[i] != 0)
      (_atexit_fn[i]) ();

  for (i = 0; i < _STDIO_MAXFILES; i++)
    if (_files[i].flags & _STDIO_USED)
      fclose (&_files[i]);

  _exit (code);
}
