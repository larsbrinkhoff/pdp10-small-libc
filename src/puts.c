#include <stdio.h>

int
puts (const char *s)
{
  fputs (s, stdout);
  putchar ('\n');
  return 0;
}
