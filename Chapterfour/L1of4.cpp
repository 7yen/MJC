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
	int t= num;
	printf("%d该整数逆向显示的结果是：",num); 
	do{
		printf("%d",t % 10);
		t = t / 10; 
		
	}while(t > 0);
	
	
	return (0);
}
