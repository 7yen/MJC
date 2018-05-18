#include<stdio.h> 
int main(void)
{	
    int num;  
    int key;
	do{
		
		printf("请输入一个非负整数：");
		scanf("%d",&num);
		
		while( num < 0){
			printf("请不要输入负整数！请输入一个非负整数：");
         	scanf("%d",&num);
		}

	    for(int i = 1;i <= num;i++){
		printf("*");
	    }
	    printf("\n是否继续执行？【Yes...0/No...9】：");
	    scanf("%d",&key);
	}while(!key);
	return (0);
}
