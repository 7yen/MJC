#include<stdio.h>
/*
	���ĸ��������ֵ 
*/
int maxof(int a,int b)
{
//	int max = a;
//	if(b >= a)
//	max = b;
	
	return ( (a > b)? a : b);
}
int max4(int w,int x,int y,int z) 
{
	return (maxof(maxof(w,x),maxof(y,z)));
}
int main(void)
{
	int n1,n2,n3,n4;
	printf("����������������\n");
	printf("����1��");
	scanf("%d",&n1);
	printf("����2��");
	scanf("%d",&n2);
	printf("����3��");
	scanf("%d",&n3);
	printf("����4��");
	scanf("%d",&n4);
	
	int max = max4(n1,n2,n3,n4);
	printf("�ϴ������Ϊ��%d",max);
	return (0);
}


