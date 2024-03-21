#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;

	while (i <= 10)
	{
		if (i == 5)
			break;//continue会不打印死循环

		printf("%d", i);
		i++;
	}	
		//continue是用于终止本次循环的
		//也就是本次循环中continue后边的代码不会再执行
		//而是直接跳转到while语句的判断部分
		//进行下一次循环的入口判断
	return 0;
}