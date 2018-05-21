#include<stdio.h>
/*
 函数版：计算最高分 
*/
#define NUMBER 5 

int max(int arr[]);
int main(void)
{
	int score[NUMBER];
	printf("请输入5名学生的分数。\n") ;
	int temp;
	for(int i = 0;i < NUMBER;i++){
		printf("%d:",i + 1);
		scanf("%d",&temp);
		score[i] = temp; 
	}
	int max_num = max(score);
	
	printf("最高分=%d",max_num);
	
	return (0);
}
int max(int arr[])
{
	int max = arr[0];
	for(int i = 1;i < NUMBER;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	
	return (max);
}
