#include<stdio.h> 
/*
	���һ�������� 
*/ 
int main(void)
{	
    int width;  
    int height;
	printf("�����������һ�������Ρ�\n"); 
	printf("��");
	scanf("%d",&width); 
	printf("�ߣ�");
	scanf("%d",&height); 
	for(int i= 1; i <= height;i++){
		for(int j= 1; j <= width;j++){
		printf("*");
	  }	
	  printf("\n");
	}
	return (0);
}
