#include<stdio.h>
#define NUMBER 5 //ѧ����Ŀ 
int main(void)
{
	printf("�����������\n");
	int score[NUMBER];
	int num ;
	int sum = 0;
	int min ;
	int max ;
	for(int i = 0;i <= NUMBER - 1;i++){
		printf("%d�ţ�",i+1); 
	    scanf("%d",&num);
	    score[i] = num;	
	}
    min = score[0];
    max = score[0];
    for(int i = 1;i <= NUMBER - 1;i++){
		if(score[i] < min )  min = score[i];
		if(score[i] > max )  max = score[i];
	}

	printf("��߷�:	%5d\n",max);
	printf("��ͷ�:	%5d\n",min);
	return (0);
 } 
