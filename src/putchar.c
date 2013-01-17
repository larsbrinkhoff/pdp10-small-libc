#include <stdio.h>

#undef putchar

int
putchar (int c)
{
  return putc (c, stdout);
}
