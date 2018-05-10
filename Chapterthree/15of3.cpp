#include<stdio.h>
/*
	计算输入的两个整数中的较大值和较小值并显示 
*/ 
int main(void)
{
	printf("请输入两个整数 。\n");
	int s1,s2;
	printf("整数1: ");scanf("%d",&s1);
	printf("整数2: ");scanf("%d",&s2);
	int min,max;
	if(s1 > s2)	{
		min = s2;
		max = s1;
	}else{
		min = s1;
		max = s2;
	}

	printf("较小值是：%d\n",min);
	printf("较大值是：%d\n",max);
	
	return (0);
}
