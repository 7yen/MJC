#include<stdio.h> 
int main(void)
{
	int num;
	do{
		printf("请输入一个非负整数："); 
		scanf("%d",&num);
		if(num < 0)
		  printf("请不要输入一个负整数。"); 	
	}while(num < 0);
	printf("该整数逆向显示的结果是："); 
	do{
		printf("%d",num % 10);
		num = num / 10; 
		
	}while(num > 0);
	
	
	return (0);
}
