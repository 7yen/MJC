#include<stdio.h>
/*
	计算输入的三个整数中的最小值并显示 
*/ 
int main(void)
{
	printf("请输入三个整数 。\n");
	int s1,s2,s3;
	printf("整数1: ");scanf("%d",&s1);
	printf("整数2: ");scanf("%d",&s2);
	printf("整数3: ");scanf("%d",&s3);
	
	int min;
	min = (s1 > s2) ? ((s2 > s3) ? s3 : s2) : ((s1 > s3) ? s3 : s1); 
	
	printf("最小值是：%d",min);
	return (0);
}
