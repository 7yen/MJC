#include<stdio.h> 
/*
	计算整数的位数 
*/
int main(void)
{
	int num;
	int cnt = 0; 
	do{
		printf("请输入一个非负整数："); 
		scanf("%d",&num);
		if(num < 0)
		  printf("请不要输入一个负整数。"); 	
	}while(num < 0);
	printf("该整数逆向显示的结果是："); 
	do{
		printf("%d",num % 10);
		num /=10; 
		cnt++;
		
	}while(num > 0);
	printf("\n该整数有%d位数\n",cnt); 
	
	return (0);
}
