#include<stdio.h> 
/*
	��������������ƽ���� 
*/
/*---��ƽ��----*/
//int sqare_error(int a)
int sqr(int a)
{
  	//return (a * a - b * b);
  	return (a * a);	

}
/*---���ֵ----*/
int diff(int a,int b)
{
	return ((a > b)? a - b :b - a );
}
int main(void)
{
	int n1,n2;
	printf("����������������\n");
	printf("����1��");
	scanf("%d",&n1);
	printf("����2��");
	scanf("%d",&n2);
	int x = sqr(n1);
	int y = sqr(n2);
	printf("%d �� %d��ƽ����Ϊ%d\n",n1,n2,diff(x,y));
	//printf("%d �� %d��ƽ����Ϊ%d\n",n1,n2,sqare_error(n1,n2));
	return (0);
}
