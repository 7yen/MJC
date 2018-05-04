#include<stdio.h>
/*
	读显示读取出的整数的最后一个数字 
*/
int main(void)
{
	//输入 
	int a;
	printf("请输入一个整数：\n"); 
	printf("整数a:");
	scanf("%d",&a);	
	//计算
	int num = a % 10; 
	//输出 
	printf("%d 的最后一位数是 %d\n",a,num);
	
	return(0);
}
