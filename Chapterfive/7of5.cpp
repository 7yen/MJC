#include<stdio.h>
/*
	��������Ԫ���е�ֵ����ʾ 
*/
int main(void)
{
	int arrA[5];
    int num; 
	for(int i = 0;i <= 4;i++){
		scanf("%d",&num);
		arrA[i] = num;
	}
    for(int i = 0;i <= 4;i++){
		printf("arrA[%d] = %d\n",i,arrA[i]);
	}
	return (0);
}
