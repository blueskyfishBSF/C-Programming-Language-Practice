#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)//�Զ��庯��
{
	int z = x + y;//������
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