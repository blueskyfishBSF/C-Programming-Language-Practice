#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "abc";//数组末尾有字符'\0'(字符串的结束标志)
	char arr2[] = { 'a','b','c','\0'};//(不算字符串的内容)
	printf("%s\n",arr1);//%s字符串
	printf("%s\n",arr2);

	char arr3[] = "abc";//数组末尾有字符'\0'(字符串的结束标志)
	char arr4[] = { 'a','b','c' };//(不算字符串的内容)
	printf("%d\n",strlen(arr3));//strlen -string length-计算字符串长度的  
	printf("%d\n",strlen(arr4));
	printf("C:user\\c\\d\\n");
	printf("%s\n",'\'');

	return 0;
}