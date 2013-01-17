#include <stdio.h>

int
fputs (const char *s, FILE *f)
{
  unsigned char c;
  while ((c = *s++) != 0)
    if (fputc (c, f) == EOF)
      return EOF;
  return 0;
}
