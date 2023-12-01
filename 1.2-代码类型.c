#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int num2 = 20;//全局变量-定义在代码块外
int main()
{
	//extern int g_val//用extern来声称外部符号

	int global = 2020;
	void test();
	{
		printf("test()--%d\n", global);
	}

	int num2 = 40;//可以同时存在-局部优先-尽量不要相同
	int num1 = 10;//局部变量-内
	int sum = 0;
	//c语言规定变量要定义在代码块的最前面
	scanf("%d%d", &num1, &num2);//&取地址符号

	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}