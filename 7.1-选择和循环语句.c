#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int age = 100;
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 50)
		printf("׳��\n");
	else if (age >= 50 && age < 90)
		printf("����\n");
	else
		printf("�ϲ���");//����ȥ��

	int a = 0;
	int b = 2;
	if (a ==1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else//else��������ifƥ��
		printf("haha\n"); 
		
	return 0;
}