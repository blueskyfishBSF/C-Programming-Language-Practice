#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1: n++;
		case 2: m++; n++; break;
		}
	case 4:m++;
		break;
	default:
		break;
	}
	printf("%d,%d", m, n);
	
	return 0;
}