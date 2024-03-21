#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;
	int num = 1;
	while (i <=10) 
	{
	num= num* i;
	i++;
	}
	printf("%d", num);
	return 0;
}