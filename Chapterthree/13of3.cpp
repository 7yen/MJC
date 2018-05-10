#include<stdio.h>
/*
	计算输入的两个整数中的较大的数并显示 
*/ 
int main(void)
{
	printf("请输入两个整数 。\n");
	int s1,s2;
	printf("整数1: ");scanf("%d",&s1);
	printf("整数2: ");scanf("%d",&s2);
	
	int max;
	max = (s1>s2) ? s1 : s2;
	printf("较大的数是：%d",max);
	return (0);
}
