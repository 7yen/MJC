#include<stdio.h>
int main(void)
{
	int number;
	printf("������һ��������");
    scanf("%d",&number);
    
    switch(number % 2){
    	case 0 :
    		printf("%d��ż��",number);
    		break;
    	case 1 :
    		printf("%d������",number);
    		break;
	}

	return (0);
 } 
