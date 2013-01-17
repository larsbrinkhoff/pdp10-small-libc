#define _MAXFDS 20

typedef struct
{
  int jfn;
  int flags;
} _fd_t;

extern _fd_t _fds[];

#define _FD_USED	001
