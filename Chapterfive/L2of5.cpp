#include<stdio.h>
int main(void)
{
	int array[5];
	for(int i = 0;i <= 4;i++){
		array[i] = 5 - i ;
		printf("array[%d] = %d\n",i,array[i]);
	}

	return (0);
}
