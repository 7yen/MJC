#include<stdio.h> 
/*
	����������λ�� 
*/
int main(void)
{
	int num;
	int cnt = 0; 
	do{
		printf("������һ���Ǹ�������"); 
		scanf("%d",&num);
		if(num < 0)
		  printf("�벻Ҫ����һ����������"); 	
	}while(num < 0);
	printf("������������ʾ�Ľ���ǣ�"); 
	int t = num;
	do{
		printf("%d",t % 10);
		t = t / 10; 
		cnt++;
		
	}while(t > 0);
	printf("\n%d��λ����%d\n",num,cnt); 
	
	return (0);
}
