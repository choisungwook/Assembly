;asm_main.asm

segment .text 
	global _asm_main

_asm_main:	
	push 20
	push 10
	call foo
	add esp, 8
	ret

foo:
	push ebp ; 일단 ebp값을 stack에 저장해둔다.	
	mov ebp, esp ; ebp를 초기화한다.

	;C코드로 int x,y를 지역변수의 의미를 어셈으로 작성
	;ebp - 4는 첫번째 인자
	sub esp, 8
	mov dword [ebp-4], 0x00 ; x = 0
	mov dword [ebp-8], 0x00 ; y = 0

	push 10
	push 20
	push 30
	push 40
	
	mov eax, dword [ebp+8]
	add eax, dword [ebp+12]

	mov esp, ebp
	pop ebp
	ret


