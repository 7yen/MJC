#include<stdio.h>
/*
	�ж�������������Ľϴ�ֵ����� 
*/
int main(void)
{
	int A,B;
	
	printf("��������������:");
	scanf("%d %d",&A,&B);
	
	if(A > B)
	printf("�ϴ�ֵ�ǣ�%d��\n",A);
	else if(A < B) 
	printf("�ϴ�ֵ�ǣ�%d��\n",B);
	else
	printf("A ���� B ��\n"); 
	
	return (0);
 }  
