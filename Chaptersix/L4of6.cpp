#include<stdio.h> 
/*
	计算两个整数的4次方差 
*/
/*---求平方----*/
//int sqare_error(int a)
int sqr(int a)
{
  	//return (a * a - b * b);
  	return (a * a);	

}
int sqr4(int a)
{
	return (sqr(a) * sqr(a));	
}
/*---求差值----*/
int diff(int a,int b)
{
	return ((a > b)? a - b :b - a );
}
int main(void)
{
	int n1,n2;
	printf("请输入两个整数。\n");
	printf("整数1：");
	scanf("%d",&n1);
	printf("整数2：");
	scanf("%d",&n2);
	int x = sqr4(n1);
	int y = sqr4(n2);
	printf("%d 和 %d的4次方差为%d\n",n1,n2,diff(x,y));
	//printf("%d 和 %d的4次方差为%d\n",n1,n2,sqare_error(n1,n2));
	return (0);
}
