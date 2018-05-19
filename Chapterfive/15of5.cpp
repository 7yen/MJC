#include<stdio.h>
/*
	计算出1000以内的质数 
*/ 
int main(void)
{
	int num,i;
	unsigned long counter = 0;//乘除运行的次数 
	//printf("输入要判断的数：\n");
	//scanf("%d",&num);
	for(num = 2;num <= 1000;num++){
	
	for(i = 2;i < num;i++){
		counter++; 
		if(num % i == 0) break;		
	}
	if( i == num)
	printf("%d\n",num);
    }
	printf("乘除运行的次数 :%d\n",counter);
	return (0);
}
