#include<stdio.h>
/*
	������������Сֵ 
*/
int minof(int a,int b,int c)
{

	return ( (a < b)? ((a < c)? a : c) : ((b < c)? b : c));
}
int main(void)
{
	int n1,n2,n3;
	printf("����������������\n");
	printf("����1��");
	scanf("%d",&n1);
	printf("����2��");
	scanf("%d",&n2);
	printf("����3��");
	scanf("%d",&n3);	
	int min = minof(n1,n2,n3);
	printf("�ϴ������Ϊ��%d",min);
	return (0);
}

