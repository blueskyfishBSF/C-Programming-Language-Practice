#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��Ķ���
#define MAX(X,Y)(X>Y?X:Y)
int main()
{
	//int a = MAX��
	int a = 10;
	int b = 20;
	//����
	//int max = Max(a,b);
	//printf("max = %d\n",max);
	//��ķ�ʽ
	int max = MAX(a,b);
	printf("max = %d\n",max);
	return 0;
}