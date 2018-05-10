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
	int sub;
	if(((s1 - s2) <= 10 && (s1 - s2) >= 0 )|| ((s2 - s1) >= -10 && ((s2 - s1) <= 0)))	{
		printf("他们的差小于等于10");
	}else{
		printf("他们的差大于等于11");
	}

	
	return (0);
}
