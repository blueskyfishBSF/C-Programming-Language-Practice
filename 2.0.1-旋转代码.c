#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() 
{
	int i = 0;
	int num = 0;
	while (i <= 25) {
		num += 1;
		i++;
		printf("%d  ", num);
	}

	return 0;
}