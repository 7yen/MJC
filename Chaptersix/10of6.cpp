#include<stdio.h>
/*
 �����棺������߷� 
*/
#define NUMBER 5 

int max(int arr[]);
int main(void)
{
	int score[NUMBER];
	printf("������5��ѧ���ķ�����\n") ;
	int temp;
	for(int i = 0;i < NUMBER;i++){
		printf("%d:",i + 1);
		scanf("%d",&temp);
		score[i] = temp; 
	}
	int max_num = max(score);
	
	printf("��߷�=%d",max_num);
	
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
