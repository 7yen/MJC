#include<stdio.h>
int main(void)
{
	printf("�����������\n");
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int sum = 0;
	printf("1�ţ�"); 
	scanf("%d",&num1);
	printf("2�ţ�"); 
	scanf("%d",&num2);
	printf("3�ţ�"); 
	scanf("%d",&num3);
	printf("4�ţ�"); 
	scanf("%d",&num4);
	printf("5�ţ�"); 
	scanf("%d",&num5);
    sum += num1;
    sum += num2;
    sum += num3;
    sum += num4;
    sum += num5;
    
    
	printf("�ܷ֣�%5d\n",sum);
	printf("ƽ���֣�%5.1f\n",sum / 5.0);
	return (0);
 } 
