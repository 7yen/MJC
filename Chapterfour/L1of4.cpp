#include<stdio.h> 
int main(void)
{
	int num;
	do{
		printf("������һ���Ǹ�������"); 
		scanf("%d",&num);
		if(num < 0)
		  printf("�벻Ҫ����һ����������"); 	
	}while(num < 0);
	int t= num;
	printf("%d������������ʾ�Ľ���ǣ�",num); 
	do{
		printf("%d",t % 10);
		t = t / 10; 
		
	}while(t > 0);
	
	
	return (0);
}
