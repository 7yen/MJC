#include<stdio.h>
/*
	输入5名学生的分数并显示出60分以上的学生一览表 
*/
#define NUMBER 5
int main(void) 
{
	int arr[NUMBER];
	int num;
	printf("请输入学生的分数。\n");
	for(int i = 0;i < NUMBER;i++){
		printf("%d号：",i);
		scanf("%d",&num);
		arr[i] = num;
	}
	
	printf("及格学生一览表\n");
	printf("-----------------\n");
	for(int i = 0;i < NUMBER;i++){
		if(arr[i] > 60)
		printf("%d号(%d分)\n",i+1,arr[i]);
	}
	
	
	return (0);
}
