#include<stdio.h>
/*
	判断输入的三个数的最小值并输出 
*/
int main(void)
{
	int A,B,C;
	int min; 
	printf("请输入三个整数:");
	scanf("%d %d %d",&A,&B,&C);
	
	if(A < B)
	min = A;
	else 
	min = B;
	if(min < C) ;
	else
	min = C;
	
	printf("最小值是%d\n",min); 
	
	return (0);
 }  
