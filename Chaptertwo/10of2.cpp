#include<stdio.h>
/*
	读取两个整数，显示它们的平均值 double
*/
int main(void)
{
	int na,nb;
	
	printf("请输入两个整数：\n"); 
	printf("整数A：");
	scanf("%d",&na);
	printf("整数B：");
	scanf("%d",&nb);
	
	double num =( na + nb)*1.0 / 2;
	printf("他们的平均值是 %f。\n",num);
	
	
	
	return (0);
}
