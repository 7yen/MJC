#include<stdio.h>
/*
  读取一个整数并显示其10倍数的值 
*/
int main(void) 
{
  int no;
  //输入 
  printf("请输入一个整数："); 
  scanf("%d",&no);
  //输出 
  printf("您输入的值是%d。\n",10*no);  
    
  return (0);    
}
