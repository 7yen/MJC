#include<stdio.h> 
/*
	输入一个整数值，显示出从0递增到0的每一个数 
*/
int main(void)
{
	int num;
	scanf("%d",&num);
	int t = 0;
	while(t <= num){
		printf("%d ",t++);
	}

	putchar('\n');	


	return (0);
}


