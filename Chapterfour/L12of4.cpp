#include<stdio.h> 
/*
 后置递增，计算并显示1到5的和 
*/
int main(void)
{
	int sum = 0;
	for(int i =1;i <= 5;i++){
		sum += i;
	}
	printf("1到5的和是%d",sum);
	
	return (0);
 } 
