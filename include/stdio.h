#ifndef _STDIO_H_
#define _STDIO_H_

#ifndef NULL
#define NULL 0
#endif

#define EOF (-1)
#define SEEK_END 3

#ifndef _SIZE_T_
#define _SIZE_T_
typedef unsigned int size_t;
#endif

typedef struct
{
  int fd;
  int flags;
  int ungetc_buf;
} FILE;

#define _STDIO_TEXT	001
#define _STDIO_EOF	002
#define _STDIO_ERROR	004
#define _STDIO_USED	010

#define _STDIO_MAXFILES 20

extern FILE _files[];
extern FILE *stdin, *stdout, *stderr;

#define clearerr(f)	((f)->flags &= ~(_STDIO_EOF | _STDIO_ERROR))
#define feof(f)		((f)->flags & _STDIO_EOF)
#define ferror(f)	((f)->flags & _STDIO_ERROR)
#define fileno(f)	((f)->fd)
#define getc(f)		fgetc ((f))
#define getchar()	getc (stdin)
#define putc(c, f)	fputc ((c), (f))
#define putchar(c)	putc ((c), stdout)

extern int	fclose (FILE *f);
extern FILE *	fdopen (int fd, const char *mode);
extern int	fflush (FILE *f);
extern int	fgetc (FILE *f);
/*		fgetpos */
extern char *	fgets (char *s, int n, FILE *f);
extern FILE *	fopen (const char *name, const char *mode);
extern int	fprintf (FILE *f, const char *format, ...);
extern int	fputc (int c, FILE *f);
extern int	fputs (const char *s, FILE *f);
extern FILE *	freopen (const char *name, const char *mode, FILE *f);
extern int	fseek (FILE *f, long offset, int whence);
/*		fsetpos */
/*		ftell */
extern char *	gets (char *s);
extern int	printf (const char *format, ...);
extern int	puts (const char *s);
/*		rewind */
extern int	snprintf (char *s, size_t n, const char *format, ...);
extern int	sprintf (char *s, const char *format, ...);
extern int	ungetc (int c, FILE *f);

#ifdef va_start
extern int	vfprintf (FILE *f, const char *format, va_list ap);
extern int	vprintf (const char *format, va_list ap);
extern int	vsnprintf (char *s, size_t n, const char *format, va_list ap);
extern int	vsprintf (char *s, const char *format, va_list ap);
#endif

#endif /* _STDIO_H_ */
