#include<stdio.h>
/*
 �����棺������Сֵ 
*/
#define NUMBER 5 
int score[NUMBER];// all can use
int min(const int arr[],int size)
{
	int min = arr[0];
	for(int i = 1;i < size;i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	
	return (min);
}
int main(void)
{
	
	int temp;
	for(int i = 0;i < NUMBER;i++){
		scanf("%d",&temp);
		score[i] = temp;
	}
	int min_num = min(score,sizeof(score)/sizeof(score[0]));
	printf("��Сֵ=%d\n",min_num);
	return (0);
}
