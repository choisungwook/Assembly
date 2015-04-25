;asm_main.asm

segment .data 
; void* L1 = 4byte공간의 의미
L1 DD 100 ; int L1 = 100 ; 변수명 Define Double DWORD
					     ; DW 2byte
						 ; DB 1byte

segment .text 
	global _asm_main

_asm_main:
	mov dword [L1], 200 ;NASM : dword
						;MASM : dword ptr

	mov eax, dword [L1] ; L1은 주소, [L1]이 값
	ret
