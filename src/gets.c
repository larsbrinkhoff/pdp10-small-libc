#include <stdio.h>

char *
gets (char *s)
{
  char *p = s;
  int c;

  while ((c = getchar ()) != EOF && c != '\n')
    *p++ = c;

  *p = 0;
  return s;
}
