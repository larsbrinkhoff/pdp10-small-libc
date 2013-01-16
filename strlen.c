#include <string.h>

size_t
strlen (const char *s)
{
  int n;
  for (n = 0; *s; *s++, n++)
    ;
  return n;
}
