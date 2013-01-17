#include <unistd.h>
#include <errno.h>
#include "fd.h"
#include "monsym.h"

asm ("SEARCH MONSYM");

int
close (int fd)
{
  register int ac1 asm ("1");

  _fds[fd].flags &= ~_FD_USED;

  ac1 = _fds[fd].jfn;
  asm ("CLOSF\n\t"
       " ERJMPR .+2\n\t"
       "MOVEI 1,0"
       : "=r" (ac1)
       : "0" (ac1));

  if (ac1 == 0)
    return 0;

  switch (ac1)
    {
    case CLSX1:
    case CLSX2:
    case DESX3:
      errno = EBADF; break;
    case IOX11:
      errno = EDQUOT; break;
    case CLSX3:
    case CLSX4:
      errno = EBUSY; break;
    case IOX34:
      errno = ENOSPC; break;
    case DESX1:
    case DESX2:
    case DESX4:
    case ENQX20:
    case IOX35:
    default:
      errno = EIO; break;
    }

  return -1;  
}
