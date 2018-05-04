#include<stdio.h>
int main(void)
{
	int n1;
	int n2;
	int n3;
	printf("请输入三个整数。\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	
	int sum = n1 + n2 + n3;
	double mean = (double)sum / 3;
	
	printf("他们的合计值是 %5d。\n",sum);
	printf("他们的平均值是 %5.1f。\n",mean);
	
	return (0);
}
