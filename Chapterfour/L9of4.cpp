#include<stdio.h> 
/*
	����һ������ֵ����ʾ����0������num,,���Ϊ2 
*/
int main(void)
{
	int num;
	scanf("%d",&num);
	while(num < 0){
		printf("������һ������");
		scanf("%d",&num);
	}
	int t = 2;
	while(t <= num){
		
		printf("%d ",t);
		t += 2;
	}


	return (0);
}


