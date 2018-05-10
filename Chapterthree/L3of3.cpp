#include<stdio.h>
/*
	取输入整数的绝对值 
*/
int main(void)
{
	int A;
	
	printf("请输入一个整数:");
	scanf("%d",&A);

	if(A >= 0)
	printf("绝对值是%d\n",A);
	else
	printf("绝对值是%d\n",(-1)*A);

	return (0);
 } 
