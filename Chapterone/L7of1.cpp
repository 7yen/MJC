#include<stdio.h>
/*
  显示出读取的两个整数的乘积
*/
int main(void) 
{
  int n1;
  int n2; 
  int mul;
  //输入 
  //printf("请输入两个整数：\n"); 
  puts("请输入两个整数："); 
  printf("整数1：");  
  scanf("%d",&n1);
  printf("整数2：");  
  scanf("%d",&n2);
  //计算
  mul = n1 * n2; 
  //输出 
  printf("它们的乘积是%d。\n",mul);  
    
  return (0);    
}
