#include<stdio.h>
/*
	��ȡ����������ֵ��Ȼ����ʾ�����ǵĺ͡�������̺����� 
*/
int main(void)
{
	//���� 
	int a,b;
	printf("����������������\n"); 
	printf("����a:");
	scanf("%d",&a);
	printf("����b:");
	scanf("%d",&b);
	
	//����
	printf("a + b\t= %d\n",a + b);
	printf("a - b\t= %d\n",a - b);
	printf("a * b\t= %d\n",a * b);
	printf("a / b\t= %d\n",a / b);
	printf("a %% b\t= %d\n",a % b);
	puts("%");
	
	
	return(0);
}
