#include<stdio.h>
/*
	������������������еĲ��ʾ 
*/ 
int main(void)
{
	printf("�������������� ��\n");
	int s1,s2;
	printf("����1: ");scanf("%d",&s1);
	printf("����2: ");scanf("%d",&s2);
	
	int num;
	num = (s1>s2) ? s1 - s2 : s2 - s1;
	printf("�����Ĳ��ǣ�%d",num);
	return (0);
}
