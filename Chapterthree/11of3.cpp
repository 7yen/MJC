#include<stdio.h>
/*
	�ж�������������Ľϴ�ֵ����� 
*/
int main(void)
{
	int A,B;
	int max; 
	printf("��������������:");
	scanf("%d %d",&A,&B);
	
	if(A > B)
	max = A;
	else 
	max = B;
	printf("�ϴ�ֵ��%d\n",max); 
	
	return (0);
 }  
