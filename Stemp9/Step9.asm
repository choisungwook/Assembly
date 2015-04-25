;step8 반복문과 제어문

segment .text 
	global _asm_main

_asm_main:	
	mov eax, 0
	mov ecx, 10
	

AAA:
	mov ebx, ecx
	and ebx, 1 ; ebx에 짝수가 있으면 
	           ; zero Flag가 Set된다
	
	jz BBB   ; 짝수라면 BBB로
	add eax, ecx
	

BBB:
	loop AAA
	ret	
