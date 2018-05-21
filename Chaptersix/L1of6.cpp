#include<stdio.h>
/*
	求两个数中最小值 
*/
int minof(int a,int b)
{

	return ( (a < b)? a : b);
}
int main(void)
{
	int n1,n2;
	printf("请输入两个整数。\n");
	printf("整数1：");
	scanf("%d",&n1);
	printf("整数2：");
	scanf("%d",&n2);
	
	int min = minof(n1,n2);
	printf("较大的整数为：%d",min);
	return (0);
}

