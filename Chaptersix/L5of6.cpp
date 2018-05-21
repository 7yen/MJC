#include<stdio.h> 
/*
	函数版：连续发出n次警报 
*/

void alert(int a) 
{
	printf("\a");//发出警报 
}

int main(void)
{
	int num;
	printf("发出几次警报：");
	scanf("%d",&num);
	
	for(int i = 1;i <= num;i++){
	alert(i);
	}
	
	return (0);
}
