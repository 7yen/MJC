#include<stdio.h>
/*
	�����1000���ڵ����� 
*/ 
int main(void)
{
	int num,i;
	unsigned long counter = 0;//�˳����еĴ��� 
	//printf("����Ҫ�жϵ�����\n");
	//scanf("%d",&num);
	for(num = 2;num <= 1000;num++){
	
	for(i = 2;i < num;i++){
		counter++; 
		if(num % i == 0) break;		
	}
	if( i == num)
	printf("%d\n",num);
    }
	printf("�˳����еĴ��� :%d\n",counter);
	return (0);
}
