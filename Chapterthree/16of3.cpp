#include<stdio.h>
int main(void)
{
	int i;
	printf("请输入月份：");
	scanf("%d",&i);
	
	if(i >=3 && i <= 5)
	printf("%d月是春季\n",i);
	else if(i >=6 && i <= 8)
	printf("%d月是夏季\n",i);
	else if(i >=9 && i <= 11)
	printf("%d月是秋季\n",i);
	else 
	printf("%d月是冬季\n",i);
	
	return (0);
}
