#include<stdio.h>
/*
	输入的整数能被 2整除吗？奇数 or 偶数 
*/
int main(void)
{
	int num;
	
	printf("请输入一个整数:");
	scanf("%d",&num);
	
	if(num % 2) //为真 
	printf("%d 是奇数。\n",num);
	printf("%d 是偶数。\n",num);
	
	return (0);
 } 
