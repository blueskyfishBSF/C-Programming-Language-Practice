#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码: >");
	scanf(" % s", password);//输入密码，并存放在passsword数组中
	printf("请确认(Y / N):>");
	ret = getchar();//Y/N
	if(ret == 'y')
	{
		printf("确认成功\n");
		return 0;
	}
}