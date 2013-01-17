#include <string.h>

int
strcmp (const char *s1, const char *s2)
{
  while (*s1 && *s2 && *s1 == *s2)
    s1++, s2++;
  return (int)*s1 - (int)*s2;
}
