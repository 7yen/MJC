#include<stdio.h>
/*
	��ȡ��������������ʾ���ǵ��̺����� 
*/
int main(void)
{
    //���� 
	int a,b;
	printf("����������������\n"); 
	printf("����A:");
	scanf("%d",&a);
	printf("����B:");
	scanf("%d",&b);
    //����
	int sh = a / b;
	int yu = a % b;
	
	//���
	printf("A����B�� %d �� %d��\n",sh,yu);  
	return (0);
}
