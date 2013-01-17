#include <string.h>

void *
memmove (void *d, const void *s, size_t n)
{
  char *dest = d;
  const char *src = s;

  if (dest == src)
    ;
  else if (dest < src)
    {
      while (n--)
	*dest++ = *src++;
    }
  else
    {
      dest += n;
      src += n;
      while (n--)
	*--dest = *--src;
    }

  return d;
}
