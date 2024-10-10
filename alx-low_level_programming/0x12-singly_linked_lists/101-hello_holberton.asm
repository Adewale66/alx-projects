global  main
extern printf

main:
	mov edi,greet
	xor eax,eax
	call printf
	mov eax,0
	ret
greet: db `Hello, Holberton\n`,0
