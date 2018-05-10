#include<stdio.h>
/*
	计算输入的两个整数中的差并显示 
*/ 
int main(void)
{
	printf("请输入两个整数 。\n");
	int s1,s2;
	printf("整数1: ");scanf("%d",&s1);
	printf("整数2: ");scanf("%d",&s2);
	
	int num;
	if(s1>s2)
	num = s1 - s2;
	else
	num = s2 - s1;
	
	printf("两数的差是：%d",num);
	return (0);
}
