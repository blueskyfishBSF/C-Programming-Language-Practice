#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;//4���ֽ�
	//&a;//ȡ��ַ
	printf("%p\n",&a) ;
	
	int a = 10;//4���ֽ�
	int* p=&a;//ȡ��ַ
	//printf("%p\n��&a);
	//printf("%p\n��p);
	*p=20;//*-�����ò�����
	printf("a=%d\n",a);
	return 0;
}