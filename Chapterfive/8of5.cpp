#include<stdio.h>
/*
	��������Ԫ���е�ֵ��������ʾ 
*/
int main(void)
{
	int arrA[5];
    int num; 
	for(int i = 0;i <= 4;i++){
		printf("arrA[%d]:",i); 
		scanf("%d",&num);
		arrA[i] = num;
	}
    for(int i = 0;i <= 4;i++){
		printf("arrA[%d] = %d\n",i,arrA[4 - i]);
	}
	return (0);
}
