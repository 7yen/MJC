#include<stdio.h> 
int main(void)
{
	int number;
	int cont;//�Ƿ���� 
	do{
		printf("������һ��������"); 
		scanf("%d",&number);	
		
		if(number % 2 == 0) {
		printf("����Ϊż��\n");	
		}else{
		printf("����Ϊ����\n");	
		}
		printf("Ҫ�ظ�һ����Yes...0/No...9����\n");
		scanf("%d",&cont);	
	}while(cont == 0);
	
	return (0);
}
