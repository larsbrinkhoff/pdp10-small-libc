#include <string.h>

int
strncmp (const char *s1, const char *s2, size_t n)
{
  while (n > 0 && *s1 && *s2 && *s1 == *s2)
    n--, s1++, s2++;
  return n == 0 ? 0 : (int)*s1 - (int)*s2;
}
