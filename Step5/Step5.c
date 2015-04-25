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

	push 10
	push 20
	push 30
	push 40

	;이제 함수인자에서 접근할때는 더이상 esp가 아닌
	;EBP를 사용하게 됩니다.
	mov eax, dword [ebp+8]
	add eax, dword [ebp+12]

	mov esp, ebp
	pop ebp
	ret

