#include<stdio.h>
#define NUMBER 5 //学生数目 
int main(void)
{
	printf("请输入分数。\n");
	int score[NUMBER];
	int num ;
	int sum = 0;
	for(int i = 0;i <= NUMBER - 1;i++){
		printf("%d号：",i+1); 
	    scanf("%d",&num);
	    score[i] = num;
	    sum += score[i]; 	
	}


	printf("总分:	%5d\n",sum);
	printf("平均分:	%5.1f\n",(double)sum / NUMBER);
	return (0);
 } 
