#include<stdio.h>
int main(void)
{
	printf("请输入分数。\n");
	int score[5];
	int num ;
	int sum = 0;
	for(int i = 0;i <= 4;i++){
		printf("%d号：",i+1); 
	    scanf("%d",&num);
	    score[i] = num;
	    sum += score[i]; 	
	}


	printf("总分:	%5d\n",sum);
	printf("平均分:	%5.1f\n",sum / 5.0);
	return (0);
 } 
