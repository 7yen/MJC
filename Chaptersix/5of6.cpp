#include<stdio.h> 
/*
	计算int型整数a的b次方 
*/

double time(double a,int b)
{
	double t = a;
//	for(int i  = 1;i < b;i++){
//		
//		a *= t;
//	}
    while(--b > 0)
        a *= t;
  	return (a);	

}

int main(void)
{
	double num;
	int times;
	printf("请输入一个实数：");
	scanf("%lf",&num);
	
	printf("请输入一个整数：");
	scanf("%d",&times);

	printf("%.2f 的立方为 %.2f\n",num,time(num,times));

	return (0);
}
