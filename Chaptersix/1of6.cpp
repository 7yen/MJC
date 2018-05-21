#include<stdio.h>
/*
	求两个数中最大值 
*/
int maxof(int a,int b)
{
//	int max = a;
//	if(b >= a)
//	max = b;
	
	return ( (a > b)? a : b);
}
int main(void)
{
	int n1,n2;
	printf("请输入两个整数。\n");
	printf("整数1：");
	scanf("%d",&n1);
	printf("整数2：");
	scanf("%d",&n2);
	
	int max = maxof(n1,n2);
	printf("较大的整数为：%d",max);
	return (0);
}


