#include<stdio.h>
/*
	�ж����������ĸ�λ���Ƿ�Ϊ5 
*/
int main(void)
{
	int A;
	
	printf("������һ������:");
	scanf("%d",&A);

	if(A % 10 == 5)
	printf("%d �ĸ�λ����5��\n",A);
	else 
	printf("%d �ĸ�λ������5��\n",A);
	
	return (0);
 } 
