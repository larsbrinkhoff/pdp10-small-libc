#include <string.h>

char *
strchr (const char *s, int c)
{
  while (*s != c)
    {
      if (*s == 0)
	return NULL;
      else
	s++;
    }

  return (char *)s;
}

