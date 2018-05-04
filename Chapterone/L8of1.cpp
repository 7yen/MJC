#include<stdio.h>
/*
  显示出读取的三个整数的和 
*/
int main(void) 
{
  int n1;
  int n2; 
  int n3;
  int sum;
  //输入 
  //printf("请输入两个整数：\n"); 
  puts("请输入两个整数："); 
  printf("整数1：");  
  scanf("%d",&n1);
  printf("整数2：");  
  scanf("%d",&n2);
  printf("整数3：");  
  scanf("%d",&n3);
  //计算
  sum = n1 + n2 +n3; 
  //输出 
  printf("它们的和是%d。\n",sum);  
    
  return (0);    
}
