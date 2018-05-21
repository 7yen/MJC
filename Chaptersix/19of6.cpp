#include<stdio.h> 
int fx = 0;

void func(void)
{
	static int sx = 0;
	int ax = 0;
	
	printf("%3d	%3d	%3d	\n",ax++,sx++,fx++);
}

int main(void)
{
	int i;
	
	printf("ax	sx	fx	\n");
	printf("---------------------\n");
	for(i = 0;i < 10;i++){
		func();
	}
	printf("---------------------\n");
	return (0);
}
