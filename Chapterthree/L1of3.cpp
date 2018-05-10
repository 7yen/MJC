#include<stdio.h>
/*
	判断整数B是否为整数A的约数 
*/
int main(void)
{
	int A,B;
	
	printf("请输入两个整数:");
	scanf("%d %d",&A,&B);
	
	if(A % B) //为真 
	printf("%d 不是 %d 的约数。\n",B,A);
	else 
	printf("%d 是 %d 的约数。。\n",B,A);
	
	return (0);
 } 
