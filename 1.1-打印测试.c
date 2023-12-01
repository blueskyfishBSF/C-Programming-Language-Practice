#include<stdio.h>
//包含一个叫stdio.h库函数文件
//std-标准 input output

int main()//主函数-程序的入口-只能有一个
{

	short age = 20;
	float weight = 95.6f;//f简化数据 向内存申请4个字节

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	char ch = 'A';//内存
	//char创建了字符类型ch
	printf("%c\n", ch);//%c-打印字符格式的数据

	int age2 = 20;
	printf("%d\n", age);//%d-打印整型十进制数据

	printf("hehe\n");
	return 0;//返回0
}