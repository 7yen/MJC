#include<stdio.h> 
int main(void)
{	
    int num;  
    int key;
	do{
		
		printf("������һ���Ǹ�������");
		scanf("%d",&num);
		
		while( num < 0){
			printf("�벻Ҫ���븺������������һ���Ǹ�������");
         	scanf("%d",&num);
		}

	    for(int i = 1;i <= num;i++){
		printf("*");
	    }
	    printf("\n�Ƿ����ִ�У���Yes...0/No...9����");
	    scanf("%d",&key);
	}while(!key);
	return (0);
}
