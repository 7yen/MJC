#include<stdio.h> 
/*
	����һ������ֵ����ʾ����0������0��ÿһ���� 
*/
int main(void)
{
	int num;
	scanf("%d",&num);
	int t = 1;
	while(t <= num){
		printf("%d ",t++);
	}
    while(t > 0){
    	putchar('\n');	
	}

	return (0);
}


