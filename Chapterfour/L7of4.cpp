#include<stdio.h> 
/*
	输入一个整数值，显示出它从开始到0的每一个数 
*/
int main(void)
{
	int num;
	scanf("%d",&num);
	
	while(num >= 1){
		printf("%d ",num--);
	}

	putchar('\n');	


	return (0);
}


