#include<stdio.h>

int fx;//��̬������ʼ��Ϊ0 

int main(void)
{
	static int sx; //��̬������ʼ��Ϊ0 
	int        ax;//�Զ�����ʼ����ȷ��ֵ
	
	printf("ax = %d\n",ax);
	printf("sx = %d\n",sx);
	printf("fx = %d\n",fx);
	
	return (0); 
}
