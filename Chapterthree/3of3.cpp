#include<stdio.h>
/*
	����������ܱ� 5������ 
*/
int main(void)
{
	int num;
	
	printf("������һ������:");
	scanf("%d",&num);
	
	if(num % 5) 
	printf("%d ���ܱ�5������\n",num);
	else
	printf("%d �ܱ�5������\n",num);
	
	return (0);
 } 
