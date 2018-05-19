#include<stdio.h>
/*
	将数组的全部元素赋值为0.0并显示 
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
