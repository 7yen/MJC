#include<stdio.h>
/*
 �����棺��Ԫ�ظ���Ϊnumber ��int��������е������� 
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
