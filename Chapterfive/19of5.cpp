#include<stdio.h>
/*
	�����1000���ڵ����� ,num���������޷���С�ڵ���numƽ�������������� 
*/ 
int main(void)
{
	int num,i;
	unsigned long counter = 0;//�˳����еĴ��� 
	int ptr = 0;
	int prime[500];
	prime[ptr++] = 2;
	prime[ptr++] = 3;
	//printf("����Ҫ�жϵ�����\n");
	//scanf("%d",&num);
	for(num = 5;num <= 1000;num+=2){
	int flag = 0;
	   for(i = 1; counter++,prime[i] *  prime[i] <= num;i++){
		counter++; 
		if(num % prime[i] == 0) {
			flag = 1;
			break;	
		}	
	   }
	   if(!flag)
	   prime[ptr++] = num;
    }
    
    for(int i = 0;i < ptr;i++){
		printf("%d\n",prime[i]);	
	}
	printf("�˳����еĴ��� :%d\n",counter);
	return (0);
}
