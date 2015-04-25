;asm_main.asm

segment .data
	S1 DB "hello", 10, 0

segment .text 
	global _asm_main
	extern _f1
	extern _f2@8	
	extern @f3@8
	extern @f4@12
	extern _printf
	extern _MessageBoxA@16

_asm_main:	
	
	; f1(1,2) 
	push 2
	push 1
	call _f1
	add esp, 8
	
	; f2(1,2)
	push 2
	push 1
	call _f2@8

	; f3(1,2)
	mov edx, 2
	mov ecx, 1
	call @f3@8
	
	; f4(1,2,3)
	push 3
	mov edx, 2
	mov ecx, 1	
	call @f4@12

	; printf("hello\n")
	push S1
	call _printf
	add esp,4

	; MessageBox(0,"hello","hello",0)
	push 0
	push S1
	push S1
	push 0
	call _MessageBoxA@16
	ret
	

