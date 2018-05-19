#include<stdio.h>
/*
	输入学生的分数并显示分布情况 
*/
#define NUMBER 80
int main(void) 
{
	int arr[NUMBER];
	int num;                   // real number of students
	int score;
	printf("请输入学生的人数：");
	
	do{
		scanf("%d",&num);
		if(num > 1 && num <= NUMBER)
		printf("人数范围[1 到 %d]:   %d\n",NUMBER,num);	
	}while(num < 1 || num > 80); 
	printf("请输入学生的分数。\n");
	for(int i = 0;i < num;i++){
		printf("%d号：",i+1);
		scanf("%d",&score);
		arr[i] = score;
	}
	
	printf("@	学生成绩分布图	@\n");
	printf("------------------------\n");
	printf("100	:"); 
	for(int i = 0;i < num;i++){
		if(arr[i] == 100)
		printf("*");
	}
	printf("\n");
	for(int i = 9;i >= 0;i--){
		printf("%d - %d	:",i * 10,i * 10 + 9); 
		for(int j = 0;j < num;j++){
		if(arr[j] >= i * 10 && arr[j] <=  i * 10 + 9 )
		printf("*");
      	}
		printf("\n");
	}
	
	return (0);
}
