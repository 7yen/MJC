#include<stdio.h>
/*
	将数组中的所有元素设置为0 
*/
int set_zero(int arr[],int size)
{
	int i;
	for(i = 0;i < size;i++){
		arr[i] = 0;
	}
} 

int main(void)
{
	int i;
	int ary1[] = {1,2,3,4,5}; 
	int ary2[] = {3,2,1};
	
	set_zero(ary1,5);
	set_zero(ary2,3);
	
	for(i = 0;i < 5;i++)printf("ary1[%d] = %d\n",i,ary1[i]);
	for(i = 0;i < 5;i++)printf("ary2[%d] = %d\n",i,ary2[i]);
	return (0);
}
