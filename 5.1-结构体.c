#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
		
int main()
{
	struct Book b1 = { "C���Գ������",55 };
	struct Book* pb = &b1;
	//����pb��ӡ���ҵ������ͼ۸�
	printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);

	printf("%s\n",pb->name);
	printf("%d\n",pb->price);

	printf("����:%s\n",b1.name);
	printf("�۸�:%d\n",b1.price);

	struct Book bl = { "C���Գ������",55 };
	strcpy(bl.name, "C++");
	//strcpy-string copy -�ּ򴮿���-�⺯��-string.h
	printf("%s\n", bl.name);
			
	return 0;
}