#include<stdio.h>
/*
 �����棺��Ԫ�ظ���Ϊnumber ��int��������е������� 
*/
#define NUMBER 5 
int score[NUMBER];
void sort_min(int arr[],int size)
{
	int i,temp;
	for(i = 0;i < size/2;i++){
    	temp = arr[i];
	    arr[i] = arr[size - 1 - i];
	    arr[size - 1 - i] = temp;
	    }
	for(i = 0;i < size;i++){
    	printf("%d ",arr[i]);
	}	
}
int main(void)
{
	int temp;
	for(int i = 0;i < NUMBER;i++){
		scanf("%d",&temp);
		score[i] = temp;
	}
	sort_min(score,sizeof(score)/sizeof(score[0]));
	//printf("%d",sizeof(score)/sizeof(score[0]));
	return (0);
}
