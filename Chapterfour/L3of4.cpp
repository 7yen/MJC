#include<stdio.h> 
/*
 ���㲢��ʾn1��n2�ĺ� 
*/
int main(void)
{
	int n1;
	int n2;
	scanf("%d %d",&n1,&n2);
	int sum = 0;
	int num2 = n2;
	do{
		sum += num2;
		num2++; 
	}while(num2  <= n1);
	printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d",n2,n1,sum);
	
	return (0);
 } 
