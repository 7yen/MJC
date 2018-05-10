#include<stdio.h>
/*
	判断输入的三个数的最大值并输出 
*/
int main(void)
{
	int A,B,C;
	int max; 
	printf("请输入三个整数:");
	scanf("%d %d %d",&A,&B,&C);
	
	if(A > B)
	max = A;
	else 
	max = B;
	if(max > C) ;
	else
	max = C;
	
	printf("最大值是%d\n",max); 
	
	return (0);
 }  
