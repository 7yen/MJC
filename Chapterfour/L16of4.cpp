#include<stdio.h> 
/*
	���һ�������� 
*/ 
int main(void)
{	
    int width;  
    int height;
	printf("�����������һ�������Ρ�\n"); 
	printf("һ�ߣ�");
	scanf("%d",&width); 
	printf("��һ�ߣ�");
	scanf("%d",&height); 
	for(int i= 1; i <= width;i++){
		for(int j= 1; j <= height;j++){
		printf("*");
	  }	
	  printf("\n");
	}
	return (0);
}
