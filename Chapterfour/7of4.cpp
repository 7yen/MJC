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
		num--;	
	}
	putchar('\n');
	
	return (0);
}


