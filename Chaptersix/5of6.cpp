#include<stdio.h> 
/*
	����int������a��b�η� 
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
	printf("������һ��ʵ����");
	scanf("%lf",&num);
	
	printf("������һ��������");
	scanf("%d",&times);

	printf("%.2f ������Ϊ %.2f\n",num,time(num,times));

	return (0);
}
