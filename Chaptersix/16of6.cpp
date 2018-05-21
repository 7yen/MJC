#include<stdio.h>
/*
  哨兵查找 
*/
#define NUMBER 5
#define FAILED -1 
int find(int arr[],int size,int num)
{
	int i = 0;
	arr[size] = num;
//	while(1){
//		if(arr[i] == num)
//		  break;
//		i++;	 
//	}
    for(i = 0;arr[i] != num;i++)
      ;
	return (i == size ? FAILED : i);	
}
int main(void)
{
	int vx[NUMBER];
	int temp;
	for(int i = 0;i < NUMBER;i++){
		printf("vx[%d]:",i);
		scanf("%d",&temp);
		vx[i] = temp;
	}
	int size = sizeof(vx)/sizeof(vx[0]);
	int key;
	printf("要查找的值：");
	scanf("%d",&key); 
	for(int i = 0;i < size;i++){
		printf("%d ",vx[i]);
	}
	printf("\n");
	printf("%d \n",key);
	int index = find(vx,size,key);
	//printf("%d",index);
	if(index == FAILED)
		printf("查找失败。\n");	
	else
    	printf("%d是数组的第%d号元素。\n",key,index + 1);
	
	return (0);
}  
