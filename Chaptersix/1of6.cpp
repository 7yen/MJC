#include<stdio.h>
/*
	�������������ֵ 
*/
int maxof(int a,int b)
{
//	int max = a;
//	if(b >= a)
//	max = b;
	
	return ( (a > b)? a : b);
}
int main(void)
{
	int n1,n2;
	printf("����������������\n");
	printf("����1��");
	scanf("%d",&n1);
	printf("����2��");
	scanf("%d",&n2);
	
	int max = maxof(n1,n2);
	printf("�ϴ������Ϊ��%d",max);
	return (0);
}


