#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��������
int Add(int, int);

//ͷ�ļ�����add.h�������
// Դ�ļ�����add.c���ú������
//#include"add.h"
//���Դﵽ����Ŀ��

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);

	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}

//�����Ķ���
int Add(int x, int y)
{
	int z = x + y;
	return z;
}