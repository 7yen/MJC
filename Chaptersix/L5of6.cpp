#include<stdio.h> 
/*
	�����棺��������n�ξ��� 
*/

void alert(int a) 
{
	printf("\a");//�������� 
}

int main(void)
{
	int num;
	printf("�������ξ�����");
	scanf("%d",&num);
	
	for(int i = 1;i <= num;i++){
	alert(i);
	}
	
	return (0);
}
