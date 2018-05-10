#include<stdio.h>
/*
	确认相等运算符和关系运算符的运算结果 是1和0 
*/
int main(void)
{
	int A = 4;
	int B= 4; 
	int equal = (A == B);
	int comp =  (A > B);
	printf("%d\n",equal);
	printf("%d\n",comp);

	return (0);
 } 
