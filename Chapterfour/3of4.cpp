#include<stdio.h> 
/*
	����������λ�� 
*/
int main(void)
{
	int num;
	int cnt = 0; 
	do{
		printf("������һ���Ǹ�������"); 
		scanf("%d",&num);
		if(num < 0)
		  printf("�벻Ҫ����һ����������"); 	
	}while(num < 0);
	printf("������������ʾ�Ľ���ǣ�"); 
	do{
		printf("%d",num % 10);
		num /=10; 
		cnt++;
		
	}while(num > 0);
	printf("\n��������%dλ��\n",cnt); 
	
	return (0);
}
