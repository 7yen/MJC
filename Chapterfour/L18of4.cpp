#include<stdio.h>
/*
	���һ�������� 
*/ 
int main(void)
{	  
    int height;
	printf("�����������һ��ֱ�������Ρ�\n"); 
	printf("�������м��㣺");
	scanf("%d",&height); 
	for(int i = height; i >= 1 ;i--){
		for(int j = i - 1 ; j >= 1;j--){
		printf(" ");
	  }	
		for(int j = 1 ; j <= 2 * (height - i) + 1;j++){
		printf("*");
	  }	
	  printf("\n");
	}
	return (0);
}
