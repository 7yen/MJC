#include<stdio.h>
/*
	�ж����������������Сֵ����� 
*/
int main(void)
{
	int A,B,C;
	int min; 
	printf("��������������:");
	scanf("%d %d %d",&A,&B,&C);
	
	if(A < B)
	min = A;
	else 
	min = B;
	if(min < C) ;
	else
	min = C;
	
	printf("��Сֵ��%d\n",min); 
	
	return (0);
 }  
