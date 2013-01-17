#include <string.h>

void *
memcpy (void *d, const void *s, size_t n)
{
#if 1
  const char *src = s;
  char *dest = d;

  while (n--)
    *dest++ = *src++;
#else
  register size_t	src_len		asm ("0") = n;
  register size_t	dest_len	asm ("3") = n;
  register const char *	src		asm ("4") = d;
  register char *	dest		asm ("1") = s;

  asm ("EXTEND 0,[MOVSLJ]"
       :
       : "r" (src_len), "r" (src), "r" (dest_len), "r" (dest)
       : "0", "1", "2", "3", "4", "5", "memory");
#endif

  return d;
}
