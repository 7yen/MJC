#include<stdio.h>
/*
	编写一段程序，读取两个整数，然后显示出前者是后者的百分之几 
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
	int num = a * 100 / b;
	
	//输出
	printf("A的值是B的 %d%%。\n",num);  
	return (0);
}
