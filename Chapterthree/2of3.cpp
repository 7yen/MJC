#include<stdio.h>
/*
	����������ܱ� 2���������� or ż�� 
*/
int main(void)
{
	int num;
	
	printf("������һ������:");
	scanf("%d",&num);
	
	if(num % 2) //Ϊ�� 
	printf("%d ��������\n",num);
	printf("%d ��ż����\n",num);
	
	return (0);
 } 
