#include<stdio.h> 
/*
	����������ѧ������������ÿ����߷֣�����ÿ��ѧ��3��ƽ���� 
*/
void max(int arr[5][3]) 
{
	for(int j = 0;j < 3;j++){
		int max = arr[0][j];
		for(int i = 1;i < 5;i++){
			if( arr[i][j] > max)
			max = arr[i][j];
		}
		printf("ÿ����߷�Ϊ��%d\n",max);	
	}	
}
void mean(int arr[5][3]){
	int i,j;
	for(i = 0;i < 5;i++){
		double mean,sum = 0.0;
		for(j = 0;j < 3;j++){
			sum += arr[i][j];
		}
		mean = sum / 3.0;
		printf("ѧ��%d����ƽ����Ϊ��%.2f\n",i,mean);	
	}
}
int main(void)
{
	int num;
	int score[5][3];
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 3;j++){
			scanf("%d",&num);
			score[i][j] = num;
		}	
	}
	max(score);
	mean(score);
	
}
