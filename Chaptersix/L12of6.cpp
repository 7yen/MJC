#include<stdio.h> 
/*
	为数组中的全部元素分配静态存储期
*/
int main(void )
{
	static int arr[10];
	for(int i = 0;i < 10;i++)
	 printf("%d ",arr[i]);
	return (0);
}
