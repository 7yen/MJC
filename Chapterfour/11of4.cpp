#include<stdio.h> 
/*
	����涨������������ ��ʾ�����ǵĺϼ�ֵ��ƽ��ֵ 
*/
int main(void)
{
	int num;
	printf("Ҫ������ٸ�������"); 
	scanf("%d",&num);
	int i = 1,temp;//int i = 0,temp;
	int sum = 0;
	double mean;
	
	while(i <= num){
		printf("No.%d:",i); //printf("No.%d:",++i); 
	    scanf("%d",&temp);
	    i++;
	    sum +=temp;
	}
	
	mean = sum*1.0 / num;
	printf("�ϼ�ֵ��%d\n",sum);
	printf("ƽ��ֵ��%.2f\n",mean);
	return (0);
}


