#include<stdio.h>
/*
 函数版：对元素个数为number 的int型数组进行倒序排序 
*/
#define NUMBER 5 
int score[NUMBER];

int main(void)
{
	int temp;
	for(int i = 0;i < NUMBER;i++){
		scanf("%d",&temp);
		score[i] = temp;
	}
	printf("%d",sizeof(score)/sizeof(score[0]));
	return (0);
}
