#include<stdio.h> 
/*
	����һ������ֵ�����������������* 
*/
int main(void)
{
	int num;
	scanf("%d",&num);
	while(num < 0){
		printf("������һ������");
		scanf("%d",&num);
	}
	for(int i = 1;i <= num;i++){
		printf("*");
	}

	printf("\n");
	return (0);
}


