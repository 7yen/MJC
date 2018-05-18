#include<stdio.h> 
/*
 后置递增，计算并显示1到5的和 
*/
int main(void)
{
	int num = 0;
	int sum = 0;
	do{
		sum += num;
		num++; 
	}while(num  < 6);
	printf("1到5的和是%d",sum);
	
	return (0);
 } 
