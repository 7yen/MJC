#include<stdio.h>
/*
	�ж�������ĸ��������ֵ����� 
*/
int main(void)
{
	int A,B,C,D;
	int max; 
	printf("�������ĸ�����:");
	scanf("%d %d %d %d",&A,&B,&C,&D);
	
	if(A > B)
	max = A;
	else 
	max = B;
	if(max > C) ;
	else
	max = C;
	
	if(max > D) ;
	else
	max = D;
	printf("���ֵ��%d\n",max); 
	
	return (0);
 }  
