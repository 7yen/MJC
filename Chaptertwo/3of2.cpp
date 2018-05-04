#include<stdio.h>
/*
	读取两个整数，并显示它们的商和余数 
*/
int main(void)
{
    //输入 
	int a,b;
	printf("请输入两个整数：\n"); 
	printf("整数A:");
	scanf("%d",&a);
	printf("整数B:");
	scanf("%d",&b);
    //计算
	int sh = a / b;
	int yu = a % b;
	
	//输出
	printf("A除以B得 %d 余 %d。\n",sh,yu);  
	return (0);
}
