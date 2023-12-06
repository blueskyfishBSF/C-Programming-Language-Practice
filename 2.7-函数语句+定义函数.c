#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)//自定义函数
{
	int z = x + y;//函数体
	return z;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	sum = Add(num1, num2);
	return 0;
}