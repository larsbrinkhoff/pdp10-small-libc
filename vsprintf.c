#include <stdio.h>
#include <stdarg.h>
#include <string.h>

static void
output (void *ptr, int c)
{
  char **sp = ptr;
  *(*sp)++ = c;
}

int
vsprintf (char *s, const char *format, va_list ap)
{
  extern int _vxprintf (void (*) (void *, int), void *, const char *, va_list);
  return _vxprintf (output, &s, format, ap);
}
