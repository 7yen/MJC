#include<stdio.h>
/*
	��дһ�γ��򣬶�ȡ����������Ȼ����ʾ��ǰ���Ǻ��ߵİٷ�֮�� 
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
	int num = a * 100 / b;
	
	//���
	printf("A��ֵ��B�� %d%%��\n",num);  
	return (0);
}
