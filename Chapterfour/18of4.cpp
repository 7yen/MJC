#include<stdio.h> 
/*
	���һ��ֱ��������
*/ 
int main(void)
{	  
    int height;
	printf("�����������һ��ֱ�������Ρ�\n"); 
	printf("�������м��㣺");
	scanf("%d",&height); 
	for(int i= 1; i <= height;i++){
		for(int j= 1; j <= i;j++){
		printf("*");
	  }	
	  printf("\n");
	}
	return (0);
}
