#include<stdio.h>
/*
	������������������еĽϴ�ֵ�ͽ�Сֵ����ʾ 
*/ 
int main(void)
{
	printf("�������������� ��\n");
	int s1,s2;
	printf("����1: ");scanf("%d",&s1);
	printf("����2: ");scanf("%d",&s2);
	int min,max;
	if(s1 > s2)	{
		min = s2;
		max = s1;
	}else{
		min = s1;
		max = s2;
	}

	printf("��Сֵ�ǣ�%d\n",min);
	printf("�ϴ�ֵ�ǣ�%d\n",max);
	
	return (0);
}
