#include<stdio.h> 
/*
 计算并显示n1到n2的和 
*/
int main(void)
{
	int n1;
	int n2;
	scanf("%d %d",&n1,&n2);
	int sum = 0;
	int num2 = n2;
	do{
		sum += num2;
		num2++; 
	}while(num2  <= n1);
	printf("大于等于%d小于等于%d的所有整数的和是%d",n2,n1,sum);
	
	return (0);
 } 
