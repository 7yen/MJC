#include<stdio.h>
int main(void)
{
	int i;
	printf("�������·ݣ�");
	scanf("%d",&i);
	
	if(i >=3 && i <= 5)
	printf("%d���Ǵ���\n",i);
	else if(i >=6 && i <= 8)
	printf("%d�����ļ�\n",i);
	else if(i >=9 && i <= 11)
	printf("%d�����＾\n",i);
	else 
	printf("%d���Ƕ���\n",i);
	
	return (0);
}
