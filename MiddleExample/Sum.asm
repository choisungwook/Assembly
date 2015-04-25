//main2.c
#include <stdio.h>
int asm_main();


int Add(int a, int b)
{
	//prolog
	//push ebp
	//mov ebp, esp
	//sub esp, 4
			
	int c = 0; //mov dword[ebp-4], 0x00

	//어셈은 메모리끼리 연산이 불가능
	c = a + b; //mov eax, dword[ebp+8]
				//add eax, dword[ebp+12]
				//mov dword[ebp-4], eax
	return c; //mov eax, dword[ebp-4]	

	//epilog
	//mov esp, ebp
	//pop ebp
	//ret
}

int main()
{
	int n = Add(1, 2); //push 2
					  //push 1
					 // call _Add
	                 // add esp, 8
	                 // mov dword[ebp-4], eax
	printf("결과 : %d\n", n);
}
