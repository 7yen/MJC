#include<stdio.h>
/*
	判断输入的两个数的较大值并输出 
*/
int main(void)
{
	int A,B;
	int max; 
	printf("请输入两个整数:");
	scanf("%d %d",&A,&B);
	
	if(A > B)
	max = A;
	else 
	max = B;
	printf("较大值是%d\n",max); 
	
	return (0);
 }  
