;asm_main.asm

segment .text 
	global _asm_main

_asm_main:	
	mov ebx, A
	jmp foo

A: 
   ; 돌아올 주소를 스택에 알려준다.
;   push B
;   jmp goo
	
;B:
	call goo ;;결국 call은 한번 stack을 사용하게 됩니다.
	ret

foo:
	mov eax, 200
	jmp ebx ; ebx의 들어있는 값으로 jmp

goo:
	mov eax, 300
	;pop ebx
	;jmp ebx	
	ret ; 위 2줄과 동일합니다.
