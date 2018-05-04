#include<stdio.h>

int main(void)
{
	int na,nb;
	
	printf("请输入两个整数：\n"); 
	printf("整数A：");
	scanf("%d",&na);
	printf("整数B：");
	scanf("%d",&nb);
	
	double num = na * 100.0 / nb;
	printf("他们的平均值是 %f%%。\n",num);
	
	
	
	return (0);
}
