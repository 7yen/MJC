#include<stdio.h> 
/*
	输入规定个数个整数并 显示出它们的合计值和平均值 
*/
int main(void)
{
	int num;
	printf("要输入多少个整数："); 
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
	printf("合计值：%d\n",sum);
	printf("平均值：%.2f\n",mean);
	return (0);
}


