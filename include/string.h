#ifndef _STRING_H_
#define _STRING_H_

#ifndef NULL
#define NULL 0
#endif

#ifndef _SIZE_T_
typedef unsigned int size_t;
#define _SIZE_T_
#endif

#define index(s, c) strchr ((s), (c))
#define rindex(s, c) strrchr ((s), (c))
#define bcopy(s, d, n) memcpy ((d), (s), (n))
#define bzero(s, n) memset ((s), 0, (n))

extern int	memcmp (const void *s1, const void *s2, size_t n);
extern void *	memcpy (void *d, const void *s, size_t n);
extern void *	memmove (void *d, const void *s, size_t n);
extern void *	memset (void *s, int c, size_t n);

extern char *	strcat (char *d, const char *s);
extern char *	strchr (const char *s, int c);
extern int	strcmp (const char *s1, const char *s2);
extern char *	strcpy (char *d, const char *s);
extern size_t	strcspn (const char *s, const char *r);
extern size_t	strlen (const char *s);
extern char *	strncat (char *d, const char *s, size_t n);
extern int	strncmp (const char *s1, const char *s2, size_t n);
extern char *	strncpy (char *d, const char *s, size_t n);
extern char *	strpbrk (const char *s, const char *t);
extern char *	strrchr (const char *s, int c);
extern size_t	strspn (const char *s, const char *r);
extern char *	strstr (const char *s, const char *r);

#endif /* _STRING_H_ */
