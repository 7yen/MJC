#include<stdio.h>
/*
	从头开始顺次为数组各元素进行初始化（1,2,3,4,5）并进行显示 
*/
int main(void)
{
	int array[5] = {5,4,3,2,1};
	for(int i = 0;i <= 4;i++){
		printf("array[%d] = %d\n",i,array[i]);
	}

	return (0);
}
