#include <string.h>

size_t
strcspn (const char *s, const char *t)
{
  size_t n = 0;

  while (*s && strchr (t, *s) == NULL)
    n++, s++;

  return n;
}
