#include<stdio.h>
/*
	判断输入的四个数的最大值并输出 
*/
int main(void)
{
	int A,B,C,D;
	int max; 
	printf("请输入四个整数:");
	scanf("%d %d %d %d",&A,&B,&C,&D);
	
	if(A > B)
	max = A;
	else 
	max = B;
	if(max > C) ;
	else
	max = C;
	
	if(max > D) ;
	else
	max = D;
	printf("最大值是%d\n",max); 
	
	return (0);
 }  
