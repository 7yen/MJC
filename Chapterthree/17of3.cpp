#include<stdio.h>
/*
  显示输入的整数除以3的余数 

*/
 int main(void)
 {
 	int number;
 	printf("请输入一个整数："); 
 	scanf("%d",&number);
 	
 	if(number % 3 == 0) {
 	printf("该整数能被3整除。");	
	}else if(number % 3 == 1) {
 	printf("该整数除以3余1。");	
	}else{
 	printf("该整数除以3余2。");
	}  
 	
 	return (0);
 }
