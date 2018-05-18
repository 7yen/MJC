#include<stdio.h> 
/*
	描绘一个长方形 
*/ 
int main(void)
{	
    int width;  
    int height;
	printf("让我们来描绘一个长方形。\n"); 
	printf("宽：");
	scanf("%d",&width); 
	printf("高：");
	scanf("%d",&height); 
	for(int i= 1; i <= height;i++){
		for(int j= 1; j <= width;j++){
		printf("*");
	  }	
	  printf("\n");
	}
	return (0);
}
