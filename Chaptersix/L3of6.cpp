#include<stdio.h> 
/*
	����int������������ 
*/

int cub(int a)
{
  	return (a * a * a);	

}

int main(void)
{
	int num;
	printf("������һ��������\n");
	printf("������");
	scanf("%d",&num);
	printf("%d ������Ϊ%d\n",num,cub(num));

	return (0);
}
