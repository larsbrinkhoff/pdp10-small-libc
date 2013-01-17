	;; C run-time start-up code, stand-alone version.

	TITLE	crt0s
	SEARCH	MONSYM

	EXTERN	%ONE,main
;	EXTERN	exit,.libc.init

	.PSECT	.stack/rwrite
%STACK:	BLOCK	1000		; stack area
	.ENDPS

	.PSECT	.heap/rwrite
.HEAP:
	.ENDPS

	.PSECT	.start/ronly
%START:
	XJRST	[%XSTART]
	.ENDPS

	.PSECT	.text/ronly
%XSTART:
	MOVE 17,[%ONE*%STACK-1]	; setup stack pointer
;	PUSHJ 17,.libc.init	; init libc
	SETZB 1,2		; clear argc and argv
	PUSHJ 17,main		; call main()
;	JRST exit		; call exit()
	HALT
	.ENDPS

	END %START
