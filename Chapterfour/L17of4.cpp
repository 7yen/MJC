#include<stdio.h> 
/*
	描绘一个直角三角形，直角在左上方 

int main(void)
{	  
    int height;
	printf("让我们来描绘一个直角三角形。\n"); 
	printf("三角形有几层：");
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
	描绘一个直角三角形，直角在右上方 
*/ 
int main(void)
{	  
    int height;
	printf("让我们来描绘一个直角三角形。\n"); 
	printf("三角形有几层：");
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
 
