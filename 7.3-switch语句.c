#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
switch (day)//������int
{ 
case 1://Ҳ��Ҫ��int�ҳ���
	printf("����1\n");
	break;
case 2:
	printf("����2\n");
	break;
case 3:
	printf("����3\n");
	break;
case 4:
	printf("����4\n");
	break;
case 5:
	printf("����5\n");
	break;
case 6:
	printf("����6\n");
	break;
case 7:
	printf("������\n");
	break;
default://�ɲ��Ӻ�β����
	printf("�������\n");
	break;
}
	return 0;
}