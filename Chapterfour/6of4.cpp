#include<stdio.h> 
/*
 ���õ��������㲢��ʾ1��5�ĺ� 
*/
int main(void)
{
	int num = 0;
	int sum = 0;
	do{
		sum += num;
		num++; 
	}while(num  < 6);
	printf("1��5�ĺ���%d",sum);
	
	return (0);
 } 
