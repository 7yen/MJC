#include<stdio.h>
#define NUMBER 5 //学生数目 
int main(void)
{
	printf("请输入分数。\n");
	int score[NUMBER];
	int num ;
	int sum = 0;
	int min ;
	int max ;
	for(int i = 0;i <= NUMBER - 1;i++){
		printf("%d号：",i+1); 
	    scanf("%d",&num);
	    score[i] = num;	
	}
    min = score[0];
    max = score[0];
    for(int i = 1;i <= NUMBER - 1;i++){
		if(score[i] < min )  min = score[i];
		if(score[i] > max )  max = score[i];
	}

	printf("最高分:	%5d\n",max);
	printf("最低分:	%5d\n",min);
	return (0);
 } 
