#include<stdio.h> 
/*
	����һ������ֵ����ʾ�����ӿ�ʼ��0��ÿһ���� 
*/
int main(void)
{
	int num;
	scanf("%d",&num);
	
	while(num >= 1){
		printf("%d ",num--);
	}

	putchar('\n');	


	return (0);
}


