#include<stdio.h>
/*
	判断输入的两个数的较大值并输出 
*/
int main(void)
{
	int A,B;
	
	printf("请输入两个整数:");
	scanf("%d %d",&A,&B);
	
	if(A > B)
	printf("较大值是：%d。\n",A);
	else if(A < B) 
	printf("较大值是：%d。\n",B);
	else
	printf("A 等于 B 。\n"); 
	
	return (0);
 }  
