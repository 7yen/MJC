#include<stdio.h>
/*
	判断输入整数的个位数是否为5 
*/
int main(void)
{
	int A;
	
	printf("请输入一个整数:");
	scanf("%d",&A);

	if(A % 10 == 5)
	printf("%d 的个位数是5。\n",A);
	else 
	printf("%d 的个位数不是5。\n",A);
	
	return (0);
 } 
