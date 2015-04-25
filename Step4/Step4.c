;asm_main.asm

segment .text 
	global _asm_main

_asm_main:	
	;레지스터를 사용한 인자 전달
	;관례적으로 ecx,dex 레지스터를 많이 사용한다
	;mov edx, 20
	;mov ecx, 10
	
	;스택을 사용한 인자 전달
	;call foo
	push 20
	push 10
	call goo
	; 함수 호출뒤에 인자 전달에 사용한 스택을 파괴해야 합니다
	;add esp, 8
	pop edx
	pop edx
	ret

;스택을 사용해서 인자 받는 함수
;ESP 레지스터를 사용해서 스택에서 꺼내게 됩니다
;결국 프로그램의 스택은 CPU 차원에서 관리되는 개념입니다.
goo : 
	mov eax, dword [esp + 4]
	add eax, dword [esp + 8]
	ret

;레지스터를 사용해서 인자 받는 함수
foo:
	mov eax, ecx
	add eax, edx
	ret
