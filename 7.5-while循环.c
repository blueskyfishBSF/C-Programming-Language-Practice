#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;

	while (i <= 10)
	{
		if (i == 5)
			break;//continue�᲻��ӡ��ѭ��

		printf("%d", i);
		i++;
	}	
		//continue��������ֹ����ѭ����
		//Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ��
		//����ֱ����ת��while�����жϲ���
		//������һ��ѭ��������ж�
	return 0;
}