#include<stdio.h>
/*
	�����棺������ʾ����ķǸ����� 
*/
int num_ne(void)
{
	int num;

	do{
	printf("������һ���Ǹ�������");	
	scanf("%d",&num);	
	if(num < 0)	
	printf("�벻Ҫ���븺������\n");			
	}while(num < 0);

	return num;
}
int reverse(int a)
{
	int temp = 0;
	do{
		temp = temp * 10 + a % 10; 
		a /= 10;
	}while(a > 0);
	
	
	return temp;
}

int main(void)
{
	int num = num_ne();
	int num_rev = reverse(num);
	printf("��������ת���ֵΪ��%d��\n",num_rev);	
	
	return (0);
}
