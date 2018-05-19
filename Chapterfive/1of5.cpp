#include<stdio.h>
int main(void)
{
	printf("请输入分数。\n");
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int sum = 0;
	printf("1号："); 
	scanf("%d",&num1);
	printf("2号："); 
	scanf("%d",&num2);
	printf("3号："); 
	scanf("%d",&num3);
	printf("4号："); 
	scanf("%d",&num4);
	printf("5号："); 
	scanf("%d",&num5);
    sum += num1;
    sum += num2;
    sum += num3;
    sum += num4;
    sum += num5;
    
    
	printf("总分：%5d\n",sum);
	printf("平均分：%5.1f\n",sum / 5.0);
	return (0);
 } 
