#include<stdio.h>

int fx;//静态，被初始化为0 

int main(void)
{
	static int sx; //静态，被初始化为0 
	int        ax;//自动，初始化不确定值
	
	printf("ax = %d\n",ax);
	printf("sx = %d\n",sx);
	printf("fx = %d\n",fx);
	
	return (0); 
}
