#include<stdio.h>
/*
  ��ʾ�������������3������ 

*/
 int main(void)
 {
 	int number;
 	printf("������һ��������"); 
 	scanf("%d",&number);
 	
 	switch(number % 3) {
 		case 0:
 	       printf("�������ܱ�3������");	
 	       break;
	    case 1: 
 	       printf("����������3��1��");	
 	       break;
	    case 2:
           printf("����������3��2��");
           break;
	}  
 	
 	return (0);
 }
