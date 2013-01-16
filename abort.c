#include <signal.h>

void abort (void)
{
  /* In this particular case, raise() never returns.  */
  extern int raise (int) __attribute__ ((noreturn));
  raise (SIGABRT);
}
