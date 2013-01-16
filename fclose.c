#include <stdio.h>
#include <unistd.h>

int
fclose (FILE *f)
{
  fflush (f);
  return close (fileno (f)) == 0 ? 0 : EOF;
}
