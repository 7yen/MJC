#include<stdio.h> 
/*
	����һ������ֵ����ʾ�����ӿ�ʼ��0��ÿһ���� 
*/
int main(void)
{
	int num;
	scanf("%d",&num);
	
	while(num >= 0){
		printf("%d ",num);
		num = num - 1;	
	}
	while(num >= 0){
	 	putchar('\n');	
	}

	return (0);
}

