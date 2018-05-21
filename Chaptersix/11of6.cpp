#include<stdio.h>
/*
 函数版：计算最高分 
*/
#define NUMBER 5 
int score_eng[NUMBER];// all can use
int score_math[NUMBER];// all can use
int max(int arr[],int size)
{
	int max = arr[0];
	for(int i = 1;i < size;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	
	return (max);
}
int main(void)
{
	
	printf("请输入5名学生的分数。\n") ;
	int temp1,temp2;
	for(int i = 0;i < NUMBER;i++){
		printf("[%d]	英语:",i + 1);
		scanf("%d",&temp1);
		score_eng[i] = temp1;
		printf("	数学:");
		scanf("%d",&temp2);
		score_math[i] = temp2; 
	}
	int max_num1 = max(score_eng,sizeof(score_eng)/sizeof(score_eng[0]));
	int max_num2 = max(score_math,sizeof(score_math)/sizeof(score_math[0]));
	printf("英语的最高分=%d\n",max_num1);
	printf("数学的最高分=%d\n",max_num2);
	return (0);
}

