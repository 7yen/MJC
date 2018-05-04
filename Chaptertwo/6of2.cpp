#include<stdio.h>
/*
	整数和浮点数 
*/
int main(void)
{
	int nx;
	double dx;
	
	nx = 9.99;
	dx = 9.99;
	
	printf("int\t型变量nx的值：%d\n",nx); 
	printf("		nx / 2：%d\n",nx / 2); 
	
	printf("double\t型变量dx的值：%f\n",dx);
	printf("		dx / 2：%f\n",dx / 2); //double型输出 %f  默认小数点后六位 
	
	
	return (0);
 } 
