#include<stdio.h>
/*
	判断输入至是否为0 
*/
int main(void)
{
	int num;
	
	printf("请输入一个整数:");
	scanf("%d",&num);
	
	if(num) //为真 
	printf("输入值不是0。\n");
	else 
	printf("输入值是0。\n");
	
	return (0);
 } 
