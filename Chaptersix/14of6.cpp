#include<stdio.h>
/*
  ˳����� 
*/
#define NUMBER 5
void find(const int arr[],int size,int num)
{
	int flag = 0;
	int i;
	for(i = 0;i < size;i++){
		if(arr[i] == num){ 
		  flag = 1;
		  break;
		} 
	}
	if(i == NUMBER)
		printf("����ʧ��\n");
	else
    	printf("%d������ĵ�%d��Ԫ�ء�\n",num,i + 1);		
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
	printf("Ҫ���ҵ�ֵ��");
	scanf("%d",&key); 
	for(int i = 0;i < size;i++){
		printf("%d ",vx[i]);
	}
	printf("\n");
	printf("%d \n",key);
	find(vx,size,key);
	return (0);
} 
