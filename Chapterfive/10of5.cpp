#include<stdio.h>
#define NUMBER 5 //ѧ����Ŀ 
int main(void)
{
	printf("�����������\n");
	int score[NUMBER];
	int num ;
	int sum = 0;
	for(int i = 0;i <= NUMBER - 1;i++){
		printf("%d�ţ�",i+1); 
	    scanf("%d",&num);
	    score[i] = num;
	    sum += score[i]; 	
	}


	printf("�ܷ�:	%5d\n",sum);
	printf("ƽ����:	%5.1f\n",(double)sum / NUMBER);
	return (0);
 } 
