#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Swap2(int* pa, int* pb)
{
	int tmp = 0;
tmp = *pa;
*pa = *pb;
*pb = tmp;
}


int main()
{
	int a = 10;
	int* pa = &a;
	//pa指针变量
	*pa = 20;//解引用操作
	printf("%d\n",a);
	return 0;
}