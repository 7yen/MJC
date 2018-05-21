#include<stdio.h>
/*
	求三个数中最大值 
*/
int maxof(int a,int b,int c)
{
//	int max = a;
//	if(b >= a)
//	max = b;
	
	return ( (a > b)? ((a > c)? a : c) : ((b > c)? b : c));
}
int main(void)
{
	int n1,n2,n3;
	printf("请输入三个整数。\n");
	printf("整数1：");
	scanf("%d",&n1);
	printf("整数2：");
	scanf("%d",&n2);
	printf("整数3：");
	scanf("%d",&n3);	
	int max = maxof(n1,n2,n3);
	printf("较大的整数为：%d",max);
	return (0);
}

