#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;//4个字节，32bit位
	int b=~a;//b是有符号的整形一按2进制)位取反
	//00000000000000000000000000000
	//11111111111111111111111111111
	//原码、反码、补码
	//负数在内存中存储的时候，存储的是二进制的补码
	//11111111111111111111111111111
	//11111111111111111111111111110
	//10000000000000000000000000001
	printf("%d\n",b);//使用的，打印的是这个数的原码

	int a = 10;
	//int b=a++;
	//后置++，先使用，再++
	//int b= ++a;
	//前置+，先++，再使用
	printf("a = % d b = % d\n",a,b);//11 11

	int a = (int)3.14;//double变int

	//真-1
	//假-0
	//&& - 逻辑与
	//|| - 逻辑或
	int a = 0;
	int b = 5;
	int c = a && b;

	int Add(int x, int y)
	{
		int z = 0;
		z = x + y;
		return z;
	}
	int arr[10] = { 0 };
	//arr[4];//[]-下标引用操作符
	int a = 10;
	int b = 20; 
	int sum = Add(a, b);//()-函数调用操作符

	//int float;//err
	// //typedef - 类型定义 - 类型重定义
	// //张三- 小三
	typedef unsigned int u_int;
	unsigned int num = 20;
	u_int num2 = 20;

	//static 修饰局部变量
	//局部变量的生命周期变长
	//static 修饰全局变量
	//改变了变量的作用域
	//让静态的全局变量只能在自己所在的源文件内部使用
	//出了源文件就没法再使用了
	//static修饰函数也是改变了函数的作用域-不准确
	//static修饰函数改变了函数的链接属性
	//外部链接属性.->内部链接属性

	//声明外部函数
	// extern int Add(int, int);


	return 0;
}