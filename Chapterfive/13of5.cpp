#include<stdio.h>
/*
	����ѧ���ķ�������ʾ�ֲ���� 
*/
#define NUMBER 80
int main(void) 
{
	int arr[NUMBER];
	int num;                   // real number of students
	int score;
	printf("������ѧ����������");
	
	do{
		scanf("%d",&num);
		if(num > 1 && num <= NUMBER)
		printf("������Χ[1 �� %d]:   %d\n",NUMBER,num);	
	}while(num < 1 || num > 80); 
	printf("������ѧ���ķ�����\n");
	for(int i = 0;i < num;i++){
		printf("%d�ţ�",i+1);
		scanf("%d",&score);
		arr[i] = score;
	}
	
	printf("@	ѧ���ɼ��ֲ�ͼ	@\n");
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
