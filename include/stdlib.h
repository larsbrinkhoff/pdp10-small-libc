#ifndef _STDLIB_H_
#define _STDLIB_H_

#ifndef NULL
#define NULL 0
#endif

#ifndef _SIZE_T_
typedef unsigned int size_t;
#define _SIZE_T_
#endif

#define alloca(n) (__builtin_alloca (n))

extern void	abort (void) __attribute__ ((noreturn));
extern int	atexit (void (*function) (void));
extern void *	calloc (size_t n, size_t m);
extern void	exit (int code) __attribute__ ((noreturn));
extern void	free (void *p);
extern void *	malloc (size_t n);
extern void *	realloc (void *p, size_t n);

#endif /* _STDLIB_H_ */
