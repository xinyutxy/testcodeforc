#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a=0;
	char b;
	scanf("%d", &a);
	//ö�ٳ���
	enum color
	{
		red,
		yellow,
		blue,

	};
	enum color c = red;
	printf("a��ֵΪ%d\n", a);
	printf("��ԭɫ֮һΪ%d\n",c);
	return 0;
}