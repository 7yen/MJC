#include<stdio.h>
int main(void)
{
	int n1;
	int n2;
	int n3;
	printf("����������������\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	
	int sum = n1 + n2 + n3;
	double mean = (double)sum / 3;
	
	printf("���ǵĺϼ�ֵ�� %5d��\n",sum);
	printf("���ǵ�ƽ��ֵ�� %5.1f��\n",mean);
	
	return (0);
}
