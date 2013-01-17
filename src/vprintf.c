#include <stdarg.h>
#include <stdio.h>

int
vprintf (const char *format, va_list ap)
{
  vfprintf (stdout, format, ap);
}
