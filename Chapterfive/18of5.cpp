#include<stdio.h>
/*
	计算出1000以内的质数 ,num是质数：无法被小于num的质数整除 
*/ 
int main(void)
{
	int num,i;
	unsigned long counter = 0;//乘除运行的次数 
	int ptr = 0;
	int prime[500];
	prime[ptr++] = 2;
	prime[ptr++] = 3;
	//printf("输入要判断的数：\n");
	//scanf("%d",&num);
	for(num = 5;num <= 1000;num+=2){
	
	   for(i = 1;i < ptr;i++){
		counter++; 
		if(num % prime[i] == 0) break;		
	   }
	   if(ptr== i)
	   prime[ptr++] = num;
    }
    
    for(int i = 0;i < ptr;i++){
		printf("%d\n",prime[i]);	
	}
	printf("乘除运行的次数 :%d\n",counter);
	return (0);
}
