#include<stdio.h>
/*
	判断输入的两个数是否相等 
*/
int main(void)
{
	int A,B;
	
	printf("请输入两个整数:");
	scanf("%d %d",&A,&B);
	
	//if(A - B) //为真 
	//printf("%d 不等于 %d 。\n",A,B);
	//else 
	//printf("%d 等于 %d 。\n",A,B);
	
	if(A == B)
	printf("%d 等于 %d 。\n",A,B);
	else 
	printf("%d 不等于 %d 。\n",A,B);
	
	return (0);
 } 
