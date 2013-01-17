#include <stdio.h>

char *
fgets (char *s, int n, FILE *f)
{
  char *p = s;
  int c;

  while (n > 0 && (c = getc (f)) != EOF && c != '\n')
    {
      *p++ = c;
      n--;
    }

  *p = 0;
  return s;
}
