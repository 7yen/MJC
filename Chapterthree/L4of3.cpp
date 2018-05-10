#include<stdio.h>
/*
	判断输入的两个数是否相等 
*/
int main(void)
{
	int A,B;
	
	printf("请输入两个整数:");
	scanf("%d %d",&A,&B);
	
	if(A > B)
	printf("A 大于 B 。\n");
	else if(A < B) 
	printf("A 小于 B 。\n");
	else
	printf("A 等于 B 。\n"); 
	
	return (0);
 } 
