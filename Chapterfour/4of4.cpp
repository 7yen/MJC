#include<stdio.h> 
/*
 计算并显示1到5的和 
*/
int main(void)
{
	int num = 0;
	int sum = 0;
	do{
		sum += num;
		num = num + 1; 
	}while(num  < 6);
	printf("1到5的和是%d",sum);
	
	return (0);
 } 
