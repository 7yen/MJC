#include<stdio.h>
/*
	函数版：逆向显示输入的非负整数 
*/
int num_ne(void)
{
	int num;

	do{
	printf("请输入一个非负整数：");	
	scanf("%d",&num);	
	if(num < 0)	
	printf("请不要输入负整数。\n");			
	}while(num < 0);

	return num;
}
int reverse(int a)
{
	int temp = 0;
	do{
		temp = temp * 10 + a % 10; 
		a /= 10;
	}while(a > 0);
	
	
	return temp;
}

int main(void)
{
	int num = num_ne();
	int num_rev = reverse(num);
	printf("该整数倒转后的值为：%d。\n",num_rev);	
	
	return (0);
}
