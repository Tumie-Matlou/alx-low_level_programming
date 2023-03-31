section .data
	sentence: db 'Hello, Holberton\n', 0Ah
	length: equ $-sentence

section .text
	global _start

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, sentence
	mov rdx, length
	syscall

	mov rax, 60
	xor rdi, rdi
	syscall
