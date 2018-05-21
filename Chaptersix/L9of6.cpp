#include<stdio.h>
/*
 函数版：对元素个数为number 的int型数组进行倒序排序 
*/
#define NUMBER 5 
int score[NUMBER];
void sort_min(int v1[],const int arr[],int size)
{
	int i,temp;
	for(i = 0;i < size;i++){
    	v1[i] = arr[i];
	}
	for(i = 0;i < size/2;i++){
    	temp = v1[i];
	    v1[i] = v1[size - 1 - i];
	    v1[size - 1 - i] = temp;
	    }
	for(i = 0;i < size;i++){
    	printf("%d ",v1[i]);
	}	
}
int main(void)
{
	int temp;
	int arr_simul[NUMBER] = {0};
	for(int i = 0;i < NUMBER;i++){
		scanf("%d",&temp);
		score[i] = temp;
	}
	sort_min(arr_simul,score,sizeof(score)/sizeof(score[0]));
	//printf("%d",sizeof(score)/sizeof(score[0]));
	return (0);
}
