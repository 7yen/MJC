#include<stdio.h>
/*
	�������е�ȫ��Ԫ�ظ��Ƶ���һ������ 
*/
int main(void)
{
	int arrA[5] = {1,2,3,4,5};
	int arrB[5]; 
	puts("arrA arrB");
	puts("----------");
	for(int i = 0;i <= 4;i++){
		arrB[i] = arrA[i];
		printf("%d %d\n",arrA[i],arrB[i]);
	}

	return (0);
}
