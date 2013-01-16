#include <string.h>

char *
strstr (const char *s, const char *t)
{
  if (*t == 0)
    return (char *)s;

  while (*s)
    {
      const char *s1 = s;
      const char *t1 = t;
      while (*s1 && *t1 && *s1 == *t1)
	s1++, t1++;
      if (*t1 == 0)
	return (char *)s;
      s++;
    }

  return NULL;
}

