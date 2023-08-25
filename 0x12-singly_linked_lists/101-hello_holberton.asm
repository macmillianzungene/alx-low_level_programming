global   main
        extern printf
main:
        mov     edi, format
	mov     eax. 0
	call    printf
	xor     eax, eax
	ret
format: db 'Hello, Holberton\n', 0

