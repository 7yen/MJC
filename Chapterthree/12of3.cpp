#include<stdio.h>
/*
	�ж�����������������ֵ����� 
*/
int main(void)
{
	int A,B,C;
	int max; 
	printf("��������������:");
	scanf("%d %d %d",&A,&B,&C);
	
	if(A > B)
	max = A;
	else 
	max = B;
	if(max > C) ;
	else
	max = C;
	
	printf("���ֵ��%d\n",max); 
	
	return (0);
 }  
