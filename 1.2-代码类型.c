#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int num2 = 20;//ȫ�ֱ���-�����ڴ������
int main()
{
	//extern int g_val//��extern�������ⲿ����

	int global = 2020;
	void test();
	{
		printf("test()--%d\n", global);
	}

	int num2 = 40;//����ͬʱ����-�ֲ�����-������Ҫ��ͬ
	int num1 = 10;//�ֲ�����-��
	int sum = 0;
	//c���Թ涨����Ҫ�����ڴ�������ǰ��
	scanf("%d%d", &num1, &num2);//&ȡ��ַ����

	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}