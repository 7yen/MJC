#include<stdio.h>
/*
	������������������е���Сֵ����ʾ 
*/ 
int main(void)
{
	printf("�������������� ��\n");
	int s1,s2,s3;
	printf("����1: ");scanf("%d",&s1);
	printf("����2: ");scanf("%d",&s2);
	printf("����3: ");scanf("%d",&s3);
	
	int min;
	min = (s1 > s2) ? ((s2 > s3) ? s3 : s2) : ((s1 > s3) ? s3 : s1); 
	
	printf("��Сֵ�ǣ�%d",min);
	return (0);
}
