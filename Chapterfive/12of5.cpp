#include<stdio.h>
/*
	����5��ѧ���ķ�������ʾ��60�����ϵ�ѧ��һ���� 
*/
#define NUMBER 5
int main(void) 
{
	int arr[NUMBER];
	int num;
	printf("������ѧ���ķ�����\n");
	for(int i = 0;i < NUMBER;i++){
		printf("%d�ţ�",i);
		scanf("%d",&num);
		arr[i] = num;
	}
	
	printf("����ѧ��һ����\n");
	printf("-----------------\n");
	for(int i = 0;i < NUMBER;i++){
		if(arr[i] > 60)
		printf("%d��(%d��)\n",i+1,arr[i]);
	}
	
	
	return (0);
}
