#include<stdio.h>
int main(void)
{
	int heistart;
	int heiend;
	int inter;
	double weight;
	printf("��ʼ��ֵ��cm����"); 
	scanf("%d",&heistart);
	printf("������ֵ��cm����"); 
	scanf("%d",&heiend);
	printf("�����ֵ��cm����"); 
	scanf("%d",&inter);
	for(int i = heistart;i <= heiend;i+=inter) {
		printf("%d	",i);
		weight = (i - 100)*0.9;
		printf("%.2fKg\n",weight);
	}
	
	return (0);
}
