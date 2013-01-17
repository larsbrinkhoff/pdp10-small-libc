#define SIG_ERR	((_sighandler_t)-1)
#define SIG_DFL	((_sighandler_t)0)
#define SIG_IGN	((_sighandler_t)1)

#define SIGABRT 3
#define SIGFPE 42

#ifndef _PID_T_
#define _PID_T_
typedef int pid_t;
#endif

typedef void (*_sighandler_t) (int);

extern int		kill (pid_t pid, int sig);
extern int		raise (int sig);
extern _sighandler_t	signal (int sig, _sighandler_t handler);
