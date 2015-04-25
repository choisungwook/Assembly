;Step1.asm

segment .data ;section과 동일
			  ; 전역변수 만드는 자리

segment .text ; 함수만드는 자리
	global _asm_main

_asm_main:
	mov eax, 100
	ret
