#include<stdio.h>
/*
	������������Сֵ 
*/
int minof(int a,int b)
{

	return ( (a < b)? a : b);
}
int main(void)
{
	int n1,n2;
	printf("����������������\n");
	printf("����1��");
	scanf("%d",&n1);
	printf("����2��");
	scanf("%d",&n2);
	
	int min = minof(n1,n2);
	printf("�ϴ������Ϊ��%d",min);
	return (0);
}

