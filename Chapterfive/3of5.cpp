#include<stdio.h>
int main(void)
{
	int array[5];
	for(int i = 0;i <= 4;i++){
		array[i] = i + 1;
		printf("array[%d] = %d\n",i,array[i]);
	}

	return (0);
}