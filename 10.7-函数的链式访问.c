#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//函数声明
int Add(int, int);

//头文件创建add.h声明语句
// 源文件创建add.c放置函数语句
//#include"add.h"
//可以达到声明目的

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

//函数的定义
int Add(int x, int y)
{
	int z = x + y;
	return z;
}