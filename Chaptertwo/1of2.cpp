#include<stdio.h>
/*
	读取两个整数的值，然后显示出它们的和、差、积、商和余数 
*/
int main(void)
{
	//输入 
	int a,b;
	printf("请输入两个整数：\n"); 
	printf("整数a:");
	scanf("%d",&a);
	printf("整数b:");
	scanf("%d",&b);
	
	//计算
	printf("a + b\t= %d\n",a + b);
	printf("a - b\t= %d\n",a - b);
	printf("a * b\t= %d\n",a * b);
	printf("a / b\t= %d\n",a / b);
	printf("a %% b\t= %d\n",a % b);
	puts("%");
	
	
	return(0);
}
