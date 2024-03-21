#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;//4个字节
	//&a;//取地址
	printf("%p\n",&a) ;
	
	int a = 10;//4个字节
	int* p=&a;//取地址
	//printf("%p\n，&a);
	//printf("%p\n，p);
	*p=20;//*-解引用操作符
	printf("a=%d\n",a);
	return 0;
}