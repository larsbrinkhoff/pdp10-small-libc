#ifndef _UNISTD_H_
#define _UNISTD_H_

typedef int		mode_t;
typedef int		ssize_t;

#ifndef _SIZE_T_
#define _SIZE_T_
typedef unsigned	size_t;
#endif

#ifndef _PID_T_
#define _PID_T_
typedef int pid_t;
#endif

extern void	_exit (int code) __attribute__ ((noreturn));
extern int	close (int fd);
extern int	creat (const char *name, mode_t mode);
extern pid_t	getpid (void);
extern int	open (const char *name, int flags, ...);
extern ssize_t	read (int fd, void *buf, size_t len);
extern ssize_t	write (int fd, const void *buf, size_t len);

#endif /* _UNISTD_H_ */
