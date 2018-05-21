#include<stdio.h> 
/*
	计算int型整数的立方 
*/

int cub(int a)
{
  	return (a * a * a);	

}

int main(void)
{
	int num;
	printf("请输入一个整数。\n");
	printf("整数：");
	scanf("%d",&num);
	printf("%d 的立方为%d\n",num,cub(num));

	return (0);
}
