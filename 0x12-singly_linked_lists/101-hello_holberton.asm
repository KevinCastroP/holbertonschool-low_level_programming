	;;  Declare needed C  functions
	externprintf		; the C function, to be called

	section .data		; Data section, initialized variables
msg:	db "Hello, Holberton", 0 ; C string needs 0
fmt:	    db "%s", 10, 0	 ; The printf format, "\n",'0'

	section .text           ; Code section.

	global main		; the standard gcc entry point
main:				; the program label for the entry point
	push    rbp		; set up stack frame, must be alligned

	movrdi,fmt
	movrsi,msg
	movrax,0		; or can be  xor  rax,rax
	call    printf		; Call C function

	poprbp			; restore stack

	movrax,0		; normal, no error, return value
	ret			; return
	
