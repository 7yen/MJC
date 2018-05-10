#include<stdio.h>
/*
	判断输入整数的符号 
*/
int main(void)
{
	int A;
	
	printf("请输入一个整数:");
	scanf("%d",&A);

	if(A > 0)
	printf("该整数是 正数。\n");
	else if(A < 0) 
	printf("该整数是 负数。\n");
	else 
	printf("该整数是 0。\n");
	return (0);
 } 
