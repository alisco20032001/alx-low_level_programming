#include <stdio.h>
/**
  * b - prints from init by the loader before main
  */
void b(void) __attribute__ ((constructor));
void b(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
101-hello_holberton.asm

extern printf
section .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0

section .text
	global main
main:
	push rbp
	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call printf

	pop rbp
	mov rax,0
	ret

