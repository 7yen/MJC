#include<stdio.h> 
int main(void)
{
	int num;
	do{
		printf("������һ���Ǹ�������"); 
		scanf("%d",&num);
		if(num < 0)
		  printf("�벻Ҫ����һ����������"); 	
	}while(num < 0);
	printf("������������ʾ�Ľ���ǣ�"); 
	do{
		printf("%d",num % 10);
		num /= 10; 
		
	}while(num > 0);
	
	
	return (0);
}
