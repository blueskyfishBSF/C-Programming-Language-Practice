#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("����������: >");
	scanf(" % s", password);//�������룬�������passsword������
	printf("��ȷ��(Y / N):>");
	ret = getchar();//Y/N
	if(ret == 'y')
	{
		printf("ȷ�ϳɹ�\n");
		return 0;
	}
}