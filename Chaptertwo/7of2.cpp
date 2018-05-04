#include<stdio.h>
/*
	读取两个实数值，用实数表示出它们的和，差，积，商 
*/
int main(void)
{

	double vx,vy;

	printf("请输入两个数。\n"); 
	printf("实数vx："); 
	scanf("%lf",&vx);
	printf("实数vy："); 
	scanf("%lf",&vy);
	
    printf("vx + vy\t= %f\n",vx + vy);
	printf("vx - vy\t= %f\n",vx - vy);
	printf("vx * vy\t= %f\n",vx * vy);
	printf("vx / vy\t= %f\n",vx / vy);
	
	
	return (0);
 } 
