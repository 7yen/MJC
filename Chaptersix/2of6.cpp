#include<stdio.h>
/*
	�������������ֵ 
*/
int maxof(int a,int b,int c)
{
//	int max = a;
//	if(b >= a)
//	max = b;
	
	return ( (a > b)? ((a > c)? a : c) : ((b > c)? b : c));
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
	int max = maxof(n1,n2,n3);
	printf("�ϴ������Ϊ��%d",max);
	return (0);
}

