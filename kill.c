#include <signal.h>
#include <unistd.h>
#include <errno.h>

int
kill (pid_t pid, int sig)
{
  /* pid > 0: send signal to pid.  pid == 0: send signal to current
     pid == -1: send signal to all except this process.  pid < 0: send
     signal to process group -pid.  */

  /* sig == 0: don't send signal, just check for errors.  */

  if (pid == getpid () && sig == SIGABRT)
    for (;;)
      asm ("halt");

  /* EINVAL: invalid signal.  ESRCH: no such pid.  EPERM: no
     permission to send signal.  */

  errno = EINVAL;
  return -1;
}
