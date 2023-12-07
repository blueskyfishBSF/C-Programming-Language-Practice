#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//宏的定义
#define MAX(X,Y)(X>Y?X:Y)
int main()
{
	//int a = MAX；
	int a = 10;
	int b = 20;
	//函数
	//int max = Max(a,b);
	//printf("max = %d\n",max);
	//宏的方式
	int max = MAX(a,b);
	printf("max = %d\n",max);
	return 0;
}