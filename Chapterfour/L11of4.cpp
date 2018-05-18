#include<stdio.h> 
/*
	输入一个整数值，竖直连续输出该整数个* 
*/
int main(void)
{
	int num;
	scanf("%d",&num);
	while(num < 0){
		printf("请输入一个正数");
		scanf("%d",&num);
	}
/*	while(num > 0){
		printf("*");
		num--;
	}

*/
    while(num-- > 0){
		printf("*\n");
	}
	printf("\n");
	return (0);
}


