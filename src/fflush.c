#include <stdio.h>

int
fflush (FILE *f)
{
  if (f == NULL)
    {
      /* Flush all stdio streams. */
      int i, err = 0;
      for (i = 0; i < _STDIO_MAXFILES; i++)
	if (_files[i].flags & _STDIO_USED && fflush (&_files[i]) != 0)
	  err = 1;
      return err ? EOF : 0;
    }
  else
    /* In this stdio implementation, flushing a stream is a nop.  */
    return 0;
}
