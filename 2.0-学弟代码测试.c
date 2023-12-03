#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float a, b = 7;
	int num, num1;
	scanf("%d", &a);
	{
		if (a <= 3) 
		{
			printf("%d\n", b);
		}
		else if ((3 < a) && (a < 10)) 
		{
			num = 7 + a - 3;
			printf("%d\n", num);
		}
		else if (a > 10) 
		{
			num1 = 7 + a - 3 + (7 + a - 3) * 1.0 / 2;
			printf("%d\n", num1);
		}
		else 
		{
			printf(" ‰»Î¥ÌŒÛ\n");
		}
	}
	return 0;
}
