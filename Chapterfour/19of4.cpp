#include<stdio.h>
/*
	描绘一个直角三角形，直角在右下方 
*/ 
int main(void)
{	  
    int height;
	printf("让我们来描绘一个直角三角形。\n"); 
	printf("三角形有几层：");
	scanf("%d",&height); 
	for(int i = height; i >= 1 ;i--){
		for(int j = 1 ; j <= i - 1;j++){
		printf(" ");
	  }	
		for(int j = 1 ; j <= height - i + 1;j++){
		printf("*");
	  }	
	  printf("\n");
	}
	return (0);
}
