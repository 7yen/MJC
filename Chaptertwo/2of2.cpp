#include<stdio.h>
/*
	����ʾ��ȡ�������������һ������ 
*/
int main(void)
{
	//���� 
	int a;
	printf("������һ��������\n"); 
	printf("����a:");
	scanf("%d",&a);	
	//����
	int num = a % 10; 
	//��� 
	printf("%d �����һλ���� %d\n",a,num);
	
	return(0);
}
