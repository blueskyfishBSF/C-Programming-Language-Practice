#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arrl[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;//int right = sizeof(arr1)/sizeof(arr1[0])-2;//err
	int right = strlen(arrl) - 1;
	while (left <= right)
	{
	arr2[left] = arrl[left];
	arr2[right] = arrl[right];
	printf("%s\n", arr2);
	Sleep(1000);//ÐÝÏ¢Ò»Ãë
	left++;
	right--;
	}
	
	return 0;
}