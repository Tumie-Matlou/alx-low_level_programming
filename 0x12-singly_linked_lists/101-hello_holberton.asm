section .data
	sentence: db "Hello, Holberton", 0
	length: db"%s", 10, 0

section .text
	extern printf
	global main

main:
	mov esi, sentence
	mov edi, length
	mov eax, 0
	call printf

	mov eax, 0
	ret
