#include<stdio.h> 
/*
	�����棺��ʾһ��ֱ�������½ǵ������� 
*/

void star_put(int b,int a) 
{
	while(b-- > 0)
		printf(" "); //����ո� 
	while(a-- > 0)
	  	printf("*");//���*  
	
	
	
}

int main(void)
{
	int num;
	printf("�������м��㣺");
	scanf("%d",&num);
	
	for(int i = 1;i <= num;i++){
	star_put(num - i,i);
	printf("\n");
	}
	
	return (0);
}
