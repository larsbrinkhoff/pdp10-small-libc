#include <fcntl.h>
#include <stdarg.h>
#include <unistd.h>
#include <errno.h>
#include "fd.h"
#include "monsym.h"

asm ("SEARCH MONSYM");

typedef unsigned char7 __attribute__ ((size (7)));

int
open (const char *name, int flags, ...)
{
  int jfn, i;
  int openf_flags = 0;
  char7 filespec[100], *p;
  mode_t mode = 0;

  if (flags & O_RDONLY)
    openf_flags |= OF_RD;

  if (flags & O_WRONLY)
    openf_flags |= OF_WR;

  if (flags & O_APPEND)
    openf_flags |= OF_APP;

  if (flags & O_CREAT)
    {
      va_list ap;
      va_start (ap, flags);
      mode = va_arg (ap, mode_t);
      va_end (ap);
    }

  if (flags & O_BINARY)
    openf_flags |= 9 << 30;
  else
    openf_flags |= 7 << 30;

  p = filespec - 1;
  name--;
  while ((*++p = *++name))
    ;

  {
    register int     ac1 asm ("1") = GJ_SHT | (flags & O_CREAT ? GJ_FOU : 0);
    register char7 * ac2 asm ("2") = filespec;

    asm ("GTJFN\n\t"
	 " ERJMPR .+5\n\t"
	 "MOVE 2,%3\n\t"
	 "OPENF\n\t"
	 " ERJMPR .+2\n\t"
	 "JRST .+1\n\t"
	 "MOVN 1,1"
	 : "=r" (ac1)
	 : "0" (ac1), "r" (ac2), "rm" (openf_flags));

    if (ac1 < 0)
      {
	switch (-ac1)
	  {
	  case OPNX1:	/* File is already open.  */
	  case OPNX9:	/* Invalid simultaneous access.  */
	    errno = EBUSY; break;
	  case OPNX2:	/* File does not exist.  */
	    errno = ENOENT; break;
	  case DESX3:	/* JFN is not assigned.  */
	    errno = EBADF; break;
	  case OPNX3:	/* Read access required.  */
	  case OPNX4:	/* Write access required.  */
	  case OPNX5:	/* Execute access required.  */
	  case OPNX6:	/* Append access required.  */
	  case OPNX12:	/* List access required.  */
	  case OPNX15:	/* Read/write access required.  */
	    errno = EACCES; break;
	  case OPNX7:	/* Device already assigned to another job.  */
	    errno = EPERM; break;
	  case OPNX8:	/* Device is not on line.  */
	  case TTYX01:	/* Line is not active.  */
	    errno = ENXIO; break;
	  case OPNX10:	/* Entire file structure full.  */
	    errno = ENOSPC; break;
	  case OPNX17:	/* No room in job for long file page table.  */
	    errno = ENFILE; break;
	  case OPNX18:	/* Unit Record Devices are not available.  */
	    errno = ENODEV; break;
	  case OPNX23:	/* Disk quota exceeded.  */
	    errno = EDQUOT; break;
	  case OPNX25:	/* Device is write-locked.  */
	    errno = EROFS; break;
	  case OPNX26:	/* Illegal to open a string pointer.  */
	  case DESX1:	/* Invalid source/destination designator.  */
	  case DESX4:	/* Invalid use of terminal designator or
                           string pointer.  */
	  case DESX7:	/* Illegal use of parse-only JFN or output
                           wildcard-designators.  */
	    errno = EINVAL; break;
	  case OPNX13:	/* Invalid access requested.  */
	  case OPNX14:	/* Invalid mode requested.  */
	  case OPNX16:	/* File has bad index block.  */
	  case SFBSX2:	/* Invalid byte size.  */
	  case STRX10:	/* Structure is offline.  */
	  case TCPXX1:	/* No IP free space for TCB.  */
	  case TCPX17:	/* Illegal IO mode for TCP device.  */
	  case TCPX18:	/* Illegal byte size for TCP device.  */
	  case TCPX19:	/* TCP connection allready exists.  */
	  case TCPX20:	/* Maximum TCP connections exceeded.  */
	  case TCPX25:	/* Open failure.  */
	  case TCPX30:	/* Illegal TCP IO mode.  */
	  case TCPX31:	/* Connection error or connection rejected.  */
	  case TCPX32:	/* Retransmission timeout.  */
	  case TCPX33:	/* Connection closed or closing.  */
	  default:
	    errno = EIO;
	  }
	return -1;
      }

    jfn = ac1;
  }

  for (i = 0; i < _MAXFDS; i++)
    if (!(_fds[i].flags & _FD_USED))
      {
	_fds[i].jfn = jfn;
	_fds[i].flags = _FD_USED;
	return i;
      }

  errno = EMFILE;
  return -1;
}
