#define _CRT_SECURE_NO_WARNINGS 1 //Ϊ��ʹscanf����������ȥʹ��scanf_s����
#include<stdio.h>
int main()

{
	extern int d;    //�����ⲿ��
	printf("���������������");
	int a, b, c;
	scanf("%d %d",&a,&b);
	c = a + b;
	printf("���Ի᲻������,����������ֵĺ�%d\n",c);
	printf("�ⲿ����dΪ%d\n", d);
	return 0;
}
//newc++file.cpp