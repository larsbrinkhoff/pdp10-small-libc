#include <string.h>

void *
memset (void *s, int c, size_t n)
{
  size_t i;
  char *t = (char *)s - 1;

  for (i = 0; i < n; i++)
    *++t = c;
  return s;
}

