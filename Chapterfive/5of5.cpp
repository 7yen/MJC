#include<stdio.h>
/*
	��ͷ��ʼ˳��Ϊ�����Ԫ�ؽ��г�ʼ����1,2,3,4,5����������ʾ 
*/
int main(void)
{
	int array[5] = {1,2,3,4,5};
	for(int i = 0;i <= 4;i++){
		printf("array[%d] = %d\n",i,array[i]);
	}

	return (0);
}
