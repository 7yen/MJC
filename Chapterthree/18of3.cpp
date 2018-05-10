#include<stdio.h>
/*
  显示输入的整数除以3的余数 

*/
 int main(void)
 {
 	int number;
 	printf("请输入一个整数："); 
 	scanf("%d",&number);
 	
 	switch(number % 3) {
 		case 0:
 	       printf("该整数能被3整除。");	
 	       break;
	    case 1: 
 	       printf("该整数除以3余1。");	
 	       break;
	    case 2:
           printf("该整数除以3余2。");
           break;
	}  
 	
 	return (0);
 }
