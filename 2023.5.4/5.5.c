#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1,字面常量
//2,const修饰的常变量
int main()
{
	//30; //int 常量
	//3.14;// float常量
	//"abc";//字符串常量
	//'w';//字符
	//const int a = 10;//const修饰a为一个常变量，a的本质为变量，但是不能直接修改，有常量的属性。
	//a = 20;
	//printf("%d\n", a);
	const int n = 10;
	int arr[n] = { 0 };//创建一个数组，数组为连续空间，可以存放10个整型，表达式必须含有常量值。

	return 0;

}