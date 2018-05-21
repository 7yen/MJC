#include<stdio.h> 
/*
	确认标识符的作用域 
*/
int x = 700;

void print_x(void) 
{
	printf("x = %d\n",x);
}

int main(void)
{
	int i;
	int x = 800;
	
	print_x();
	
	printf("x = %d\n",x);
	
	for(i = 0;i < 5;i++){
		int x = i * 100;
		printf("x = %d\n",x);
	}
	
	printf("x = %d\n",x);
	
	return (0);
}
