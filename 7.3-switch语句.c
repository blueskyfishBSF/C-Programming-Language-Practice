#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
switch (day)//必须是int
{ 
case 1://也需要是int且常量
	printf("星期1\n");
	break;
case 2:
	printf("星期2\n");
	break;
case 3:
	printf("星期3\n");
	break;
case 4:
	printf("星期4\n");
	break;
case 5:
	printf("星期5\n");
	break;
case 6:
	printf("星期6\n");
	break;
case 7:
	printf("星期天\n");
	break;
default://可不接后尾程序
	printf("输入错误\n");
	break;
}
	return 0;
}