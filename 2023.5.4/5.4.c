#define _CRT_SECURE_NO_WARNINGS 1 //为了使scanf函数而避免去使用scanf_s函数
#include<stdio.h>
int main()

{
	extern int d;    //引入外部量
	printf("输入两个数字求和");
	int a, b, c;
	scanf("%d %d",&a,&b);
	c = a + b;
	printf("语言会不会乱码,输出两个数字的和%d\n",c);
	printf("外部变量d为%d\n", d);
	return 0;
}
//newc++file.cpp