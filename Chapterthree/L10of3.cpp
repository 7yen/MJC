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
	int sub;
	if(((s1 - s2) <= 10 && (s1 - s2) >= 0 )|| ((s2 - s1) >= -10 && ((s2 - s1) <= 0)))	{
		printf("���ǵĲ�С�ڵ���10");
	}else{
		printf("���ǵĲ���ڵ���11");
	}

	
	return (0);
}
