#include <stdarg.h>
#include <stdio.h>

int
sprintf (char *s, const char *format, ...)
{
  va_list ap;
  int result;

  va_start (ap, format);
  result = vsprintf (s, format, ap);
  va_end (ap);
  return result;
}
