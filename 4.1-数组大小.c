#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;
	int arr[] = (1,2,3,4,5,6);//6*4=24
	printf("%d\n",sizeof(a));//4
	printf("%d\n",sizeof(int));
	//printf("%d\n",sizeof int);//err
	printf("%d\n",sizeof(arr));//计算数组大小，单位是字节
	return 0;
}