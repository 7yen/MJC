#include<stdio.h> 
/*
	����涨������������ ��ʾ�����ǵĺϼ�ֵ��ƽ��ֵ 
*/
int main(void)
{
	int num;
	printf("Ҫ������ٸ�������"); 
	scanf("%d",&num);
	int temp;
	int sum = 0;
	double mean;
	
	for(int i = 1;i <= num;i++){
		printf("No.%d:",i); 
	    scanf("%d",&temp);
	    sum +=temp;
	}
	
	mean = sum*1.0 / num;
	printf("�ϼ�ֵ��%d\n",sum);
	printf("ƽ��ֵ��%.2f\n",mean);
	return (0);
}

