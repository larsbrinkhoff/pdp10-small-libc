BINDIR = /usr/local/pdp10-xkl-tops20/bin
LIBDIR = /usr/local/lib/gcc-lib/pdp10-xkl-tops20/3.2

ALL = crt0.o libc.a libm.a

CFLAGS = -O2 -Wall -W
CC = ../pdp10/gcc/xgcc -B../pdp10/gcc/ -B$(BINDIR)/
AR = $(BINDIR)/ar
AS = $(CC) -c

C_SRC = _exit.c abort.c alloca.c atexit.c calloc.c close.c creat.c	\
	errno.c exit.c fclose.c fdopen.c fflush.c fgetc.c fgets.c	\
	fopen.c fprintf.c fputc.c fputs.c free.c fseek.c fwrite.c	\
	getpid.c gets.c init.c isprint.c kill.c malloc.c memcmp.c	\
	memcpy.c memmove.c memset.c open.c printf.c putchar.c puts.c	\
	raise.c read.c realloc.c signal.c sprintf.c strcat.c strchr.c	\
	strcmp.c strcpy.c strcspn.c strlen.c strncat.c strncmp.c	\
	strncpy.c strpbrk.c strrchr.c strspn.c strstr.c ungetc.c	\
	vfprintf.c vprintf.c vsprintf.c vxprintf.c write.c

M_SRC = floor.c pow.c

.PHONY: all install clean

all: $(ALL)

install: all
	cp $(ALL) $(LIBDIR)

clean:
	rm -rf *~ *.o $(ALL)

libc.a: $(C_SRC:.c=.o) one.o
	$(AR) rc $@ $^

libm.a: $(M_SRC:.c=.o)
	$(AR) rc $@ $^

%.s: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -S $< -o $@
