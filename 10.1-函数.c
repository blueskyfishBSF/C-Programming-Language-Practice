#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
	char arrl[] = "bit";
	char arr2[20] = "###########";
	//bit\0########	
	strcpy(arr2, arrl);
	printf("%s\n", arr2);
	//strcpy - string copy - �ַ�������
	//strlen - string length - �ַ��������й�

	char arr3[] = "hello world";
	memset(arr3,'*',5);
	printf("%s", arr3);

	return 0;
}