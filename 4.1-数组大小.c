#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;
	int arr[] = (1,2,3,4,5,6);//6*4=24
	printf("%d\n",sizeof(a));//4
	printf("%d\n",sizeof(int));
	//printf("%d\n",sizeof int);//err
	printf("%d\n",sizeof(arr));//���������С����λ���ֽ�
	return 0;
}