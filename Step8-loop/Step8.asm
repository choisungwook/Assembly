;step8 반복문과 제어문

segment .text 
	global _asm_main

_asm_main:	
	mov eax, 0
	mov ecx, 10
	jmp AAA

AAA:
	add eax, ecx
	loop AAA ; if(--ecx != 0) jmp AAA

	ret
	
