#include <stdio.h>

int
ungetc (int c, FILE *f)
{
  if (f->ungetc_buf < 0)
    return EOF;
  f->ungetc_buf = c;
  return c;
}
