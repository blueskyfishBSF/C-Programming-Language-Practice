#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int age = 100;
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 50)
		printf("壮年\n");
	else if (age >= 50 && age < 90)
		printf("老年\n");
	else
		printf("老不死");//可以去掉

	int a = 0;
	int b = 2;
	if (a ==1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else//else会和最近的if匹配
		printf("haha\n"); 
		
	return 0;
}