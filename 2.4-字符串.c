#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "abc";//����ĩβ���ַ�'\0'(�ַ����Ľ�����־)
	char arr2[] = { 'a','b','c','\0'};//(�����ַ���������)
	printf("%s\n",arr1);//%s�ַ���
	printf("%s\n",arr2);

	char arr3[] = "abc";//����ĩβ���ַ�'\0'(�ַ����Ľ�����־)
	char arr4[] = { 'a','b','c' };//(�����ַ���������)
	printf("%d\n",strlen(arr3));//strlen -string length-�����ַ������ȵ�  
	printf("%d\n",strlen(arr4));
	printf("C:user\\c\\d\\n");
	printf("%s\n",'\'');

	return 0;
}