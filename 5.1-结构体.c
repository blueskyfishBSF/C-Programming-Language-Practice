#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};
		
int main()
{
	struct Book b1 = { "C语言程序设计",55 };
	struct Book* pb = &b1;
	//利用pb打印出我的书名和价格
	printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);

	printf("%s\n",pb->name);
	printf("%d\n",pb->price);

	printf("书名:%s\n",b1.name);
	printf("价格:%d\n",b1.price);

	struct Book bl = { "C请言程序设计",55 };
	strcpy(bl.name, "C++");
	//strcpy-string copy -字简串拷贝-库函数-string.h
	printf("%s\n", bl.name);
			
	return 0;
}