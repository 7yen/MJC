#include<stdio.h> 
int main(void)
{
	int i,j;
	printf("	|");
	for(int m = 1;m <= 9;m++){
		printf("%d	",m);
    }  
    printf("--------------------------------------------------------------------------\n");
	for(i = 1;i <= 9;i++){
		printf("%d	|",i);
		for(j = 1;j <= 9;j++){
			printf("%d	",i * j);
		}
		printf("\n");
	}
	
	
	return(0);
}
