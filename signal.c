#include <signal.h>
#include <errno.h>

_sighandler_t
signal (int sig, _sighandler_t handler)
{
  if (handler == SIG_DFL)
    return SIG_DFL;

  errno = EINVAL;
  return SIG_ERR;
}
