#include<stdio.h> 
/*
	输入一个整数值，显示输出小于输入整数的所有2的乘方 
*/
int main(void)
{
	int num;
	scanf("%d",&num);
	while(num < 0){
		printf("请输入一个正数");
		scanf("%d",&num);
	}
	int t = 2;
	while(t <= num){
		
		printf("%d ",t);
		t *= 2;
	}


	return (0);
}


