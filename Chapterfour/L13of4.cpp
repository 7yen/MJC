#include<stdio.h>
int main(void)
{
	int num;
	printf("������һ��������");
	scanf("%d",&num); 
	
	for(int i =1;i <= num;i++){
		printf("%d",i % 10);	
	}
	return (0);
 } 
