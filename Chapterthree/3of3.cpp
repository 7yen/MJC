#include<stdio.h>
/*
	输入的整数能被 5整除吗？ 
*/
int main(void)
{
	int num;
	
	printf("请输入一个整数:");
	scanf("%d",&num);
	
	if(num % 5) 
	printf("%d 不能被5整除。\n",num);
	else
	printf("%d 能被5整除。\n",num);
	
	return (0);
 } 
