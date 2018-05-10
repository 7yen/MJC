#include<stdio.h>
int main(void)
{
	int number;
	printf("请输入一个整数：");
    scanf("%d",&number);
    
    switch(number % 2){
    	case 0 :
    		printf("%d是偶数",number);
    		break;
    	case 1 :
    		printf("%d是奇数",number);
    		break;
	}

	return (0);
 } 
