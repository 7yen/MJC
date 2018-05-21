#include<stdio.h> 
/*
	函数版：显示一个直角在右下角的三角形 
*/

void star_put(int b,int a) 
{
	while(b-- > 0)
		printf(" "); //输出空格 
	while(a-- > 0)
	  	printf("*");//输出*  
	
	
	
}

int main(void)
{
	int num;
	printf("三角形有几层：");
	scanf("%d",&num);
	
	for(int i = 1;i <= num;i++){
	star_put(num - i,i);
	printf("\n");
	}
	
	return (0);
}
