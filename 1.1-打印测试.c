#include<stdio.h>
//����һ����stdio.h�⺯���ļ�
//std-��׼ input output

int main()//������-��������-ֻ����һ��
{

	short age = 20;
	float weight = 95.6f;//f������ ���ڴ�����4���ֽ�

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	char ch = 'A';//�ڴ�
	//char�������ַ�����ch
	printf("%c\n", ch);//%c-��ӡ�ַ���ʽ������

	int age2 = 20;
	printf("%d\n", age);//%d-��ӡ����ʮ��������

	printf("hehe\n");
	return 0;//����0
}