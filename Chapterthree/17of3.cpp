#include<stdio.h>
/*
  ��ʾ�������������3������ 

*/
 int main(void)
 {
 	int number;
 	printf("������һ��������"); 
 	scanf("%d",&number);
 	
 	if(number % 3 == 0) {
 	printf("�������ܱ�3������");	
	}else if(number % 3 == 1) {
 	printf("����������3��1��");	
	}else{
 	printf("����������3��2��");
	}  
 	
 	return (0);
 }
