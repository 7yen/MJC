#include<stdio.h>
/*
	�ж�������������Ƿ���� 
*/
int main(void)
{
	int A,B;
	
	printf("��������������:");
	scanf("%d %d",&A,&B);
	
	//if(A - B) //Ϊ�� 
	//printf("%d ������ %d ��\n",A,B);
	//else 
	//printf("%d ���� %d ��\n",A,B);
	
	if(A == B)
	printf("%d ���� %d ��\n",A,B);
	else 
	printf("%d ������ %d ��\n",A,B);
	
	return (0);
 } 
