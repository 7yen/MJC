#include<stdio.h>
/*
	ȡ���������ľ���ֵ 
*/
int main(void)
{
	int A;
	
	printf("������һ������:");
	scanf("%d",&A);

	if(A >= 0)
	printf("����ֵ��%d\n",A);
	else
	printf("����ֵ��%d\n",(-1)*A);

	return (0);
 } 
