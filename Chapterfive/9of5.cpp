#include<stdio.h>
int main(void)
{
	printf("�����������\n");
	int score[5];
	int num ;
	int sum = 0;
	for(int i = 0;i <= 4;i++){
		printf("%d�ţ�",i+1); 
	    scanf("%d",&num);
	    score[i] = num;
	    sum += score[i]; 	
	}


	printf("�ܷ�:	%5d\n",sum);
	printf("ƽ����:	%5.1f\n",sum / 5.0);
	return (0);
 } 
