#include<stdio.h>
/*
	������������������еĽϴ��������ʾ 
*/ 
int main(void)
{
	printf("�������������� ��\n");
	int s1,s2;
	printf("����1: ");scanf("%d",&s1);
	printf("����2: ");scanf("%d",&s2);
	
	int max;
	max = (s1>s2) ? s1 : s2;
	printf("�ϴ�����ǣ�%d",max);
	return (0);
}
