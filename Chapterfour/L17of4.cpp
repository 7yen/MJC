#include<stdio.h> 
/*
	���һ��ֱ�������Σ�ֱ�������Ϸ� 

int main(void)
{	  
    int height;
	printf("�����������һ��ֱ�������Ρ�\n"); 
	printf("�������м��㣺");
	scanf("%d",&height); 
	for(int i= 1; i <= height;i++){
		for(int j = height - i ; j >= 0;j--){
		printf("*");
	  }	
	  printf("\n");
	}
	return (0);
}
*/
/*
	���һ��ֱ�������Σ�ֱ�������Ϸ� 
*/ 
int main(void)
{	  
    int height;
	printf("�����������һ��ֱ�������Ρ�\n"); 
	printf("�������м��㣺");
	scanf("%d",&height); 
	for(int i= 1; i <= height;i++){
		for(int j = 1 ; j <= i;j++){
		printf(" ");
	  }	
		for(int j = height - i ; j >= 0;j--){
		printf("*");
	  }	
	  printf("\n");
	}
	return (0);
}
 
