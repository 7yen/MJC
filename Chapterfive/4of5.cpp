#include<stdio.h>
/*
	�������ȫ��Ԫ�ظ�ֵΪ0.0����ʾ 
*/
int main(void)
{
	double array[5];
	for(int i = 0;i <= 4;i++){
		array[i] = 0.0;
		printf("array[%d] = %.1f\n",i,array[i]);
	}

	return (0);
}
