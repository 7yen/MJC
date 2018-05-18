#include<stdio.h> 
int main(void)
{
	int number;
	int cont;//是否继续 
	do{
		printf("请输入一个整数："); 
		scanf("%d",&number);	
		
		if(number % 2 == 0) {
		printf("该数为偶数\n");	
		}else{
		printf("该数为奇数\n");	
		}
		printf("要重复一次吗【Yes...0/No...9】：\n");
		scanf("%d",&cont);	
	}while(cont == 0);
	
	return (0);
}
