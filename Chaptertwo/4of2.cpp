#include<stdio.h>
/*
	对读取 的整数值进行符号取反操作，并输出结果 
*/
int main(void) 
{
	int num;
	printf("请输入一个整数：\n");
	scanf("%d",&num);
	
	printf("符号取反后的值是 %d\n",-num);
	
	return (0);
}
