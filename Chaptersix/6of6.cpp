#include<stdio.h>
/*
	求四个数中最大值 
*/
int maxof(int a,int b)
{
//	int max = a;
//	if(b >= a)
//	max = b;
	
	return ( (a > b)? a : b);
}
int max4(int w,int x,int y,int z) 
{
	return (maxof(maxof(w,x),maxof(y,z)));
}
int main(void)
{
	int n1,n2,n3,n4;
	printf("请输入两个整数。\n");
	printf("整数1：");
	scanf("%d",&n1);
	printf("整数2：");
	scanf("%d",&n2);
	printf("整数3：");
	scanf("%d",&n3);
	printf("整数4：");
	scanf("%d",&n4);
	
	int max = max4(n1,n2,n3,n4);
	printf("较大的整数为：%d",max);
	return (0);
}


