#include<stdio.h> 
/*
	函数版：显示一个直角在左下角的三角形 
*/

void star_put(int a) 
{
	while(a-- > 0)
	printf("*");
}

int main(void)
{
	int num;
	printf("三角形有几层：");
	scanf("%d",&num);
	
	for(int i = 1;i <= num;i++){
	star_put(i);
	printf("\n");
	}
	
	return (0);
}
