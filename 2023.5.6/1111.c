#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a=0;
	char b;
	scanf("%d", &a);
	//枚举常量
	enum color
	{
		red,
		yellow,
		blue,

	};
	enum color c = red;
	printf("a的值为%d\n", a);
	printf("三原色之一为%d\n",c);
	return 0;
}