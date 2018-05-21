#include<stdio.h>
/*
 函数版：计算最高分  version 2
*/
#define NUMBER 5 
int score[NUMBER];// all can use
int max(void);
int main(void)
{
	
	printf("请输入5名学生的分数。\n") ;
	int temp;
	for(int i = 0;i < NUMBER;i++){
		printf("%d:",i + 1);
		scanf("%d",&temp);
		score[i] = temp; 
	}
	int max_num = max();
	
	printf("最高分=%d",max_num);
	
	return (0);
}
int max(void)
{
	int max = score[0];
	for(int i = 1;i < NUMBER;i++){
		if(score[i] > max){
			max = score[i];
		}
	}
	
	return (max);
}
