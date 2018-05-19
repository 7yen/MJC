#include<stdio.h>
/*
	输入数组元素中的值并显示 
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
