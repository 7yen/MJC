#include<stdio.h>
int main(void)
{
	int height;

	printf("请输入你的身高：\n");
	scanf("%d",&height);
	
	
	double IBM = (height - 100 ) * 0.9;
	
	printf("你的标准体重是 %.1f公斤。\n",IBM);
	
	return (0);
}
