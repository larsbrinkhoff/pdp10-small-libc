	;; C run-time start-up code, TOPS-20 version.

	TITLE	crt0
	SEARCH	MONSYM

	EXTERN	%ONE,main,exit,.libc.init

	.PSECT	.stack/rwrite
%STACK:	BLOCK	1000		; stack area
	.ENDPS

	.PSECT	.heap/rwrite
.HEAP:	BLOCK	1000		; heap area
	.ENDPS

	.PSECT	.text/ronly
%START:
	RESET			; reset I/O
	MOVE 17,[%ONE*%STACK-1]	; setup stack pointer
	PUSHJ 17,.libc.init	; init libc
	SETZB 1,2		; clear argc and argv
	PUSHJ 17,main		; call main()
	JRST exit		; call exit()
	.ENDPS

	END %START
