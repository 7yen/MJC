#include<stdio.h>
/*
	��ȡ������������ʾ���ǵ�ƽ��ֵ double
*/
int main(void)
{
	int na,nb;
	
	printf("����������������\n"); 
	printf("����A��");
	scanf("%d",&na);
	printf("����B��");
	scanf("%d",&nb);
	
	double num =( na + nb)*1.0 / 2;
	printf("���ǵ�ƽ��ֵ�� %f��\n",num);
	
	
	
	return (0);
}
