#include<stdio.h>
/*
	�ж�����B�Ƿ�Ϊ����A��Լ�� 
*/
int main(void)
{
	int A,B;
	
	printf("��������������:");
	scanf("%d %d",&A,&B);
	
	if(A % B) //Ϊ�� 
	printf("%d ���� %d ��Լ����\n",B,A);
	else 
	printf("%d �� %d ��Լ������\n",B,A);
	
	return (0);
 } 
