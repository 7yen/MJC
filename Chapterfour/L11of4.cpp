#include<stdio.h> 
/*
	����һ������ֵ����ֱ���������������* 
*/
int main(void)
{
	int num;
	scanf("%d",&num);
	while(num < 0){
		printf("������һ������");
		scanf("%d",&num);
	}
/*	while(num > 0){
		printf("*");
		num--;
	}

*/
    while(num-- > 0){
		printf("*\n");
	}
	printf("\n");
	return (0);
}


