#include <stdio.h>

//__cdecl은 생략가능

int __cdecl f1(int a, int b) { printf("f1 : %d %d\n", a, b); }
int __stdcall f2(int a, int b) { printf("f2 : %d %d\n", a, b); }
int __fastcall f3(int a, int b) { printf("f3 : %d %d\n", a, b); }
int __fastcall f4(int a, int b,int c) { printf("f4 : %d %d %d\n", a, b,c); }

int asm_main();

int main()
{
	asm_main();
	//f1(1, 2);
	//f2(1, 2);
	//f3(1, 2);
	//f1(1, 2,3);
}
