#define _CRT_SECURE_NO_WARNINGS 1//建议不要用scanf_s
#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);

	return 0;
}