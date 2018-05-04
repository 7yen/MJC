#include<stdio.h>
/*
  显示出读取的两个整数的值 
*/
int main(void) 
{
  int n1;
  int n2; 
  //输入 
  //printf("请输入两个整数：\n"); 
  puts("请输入两个整数："); 
  printf("整数1：");  
  scanf("%d",&n1);
  printf("整数2：");  
  scanf("%d",&n2);
  //输出 
  printf("它们的和是%d。\n",n1 + n2);  
    
  return (0);    
}
