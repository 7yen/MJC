#include<stdio.h>
/*
	计算2行3列矩阵的和 
*/
void addArr(const int ma[2][3],const int mb[2][3],int mc[2][3])
{
  	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 3;j++){
			mc[i][j] = ma[i][j] +mb[i][j];
		}	
	}
		
}
int main(void) 
{
	int i,j;
	int ma[2][3] = {{1,2,3},{4,5,6}};
	int mb[2][3] = {{6,3,4},{5,1,2}};
	int mc[2][3] = {0};
	
	addArr(ma,mb,mc);	
	for(i = 0;i < 2;i++){
		for(j = 0;j < 3;j++){
			printf("%3d",mc[i][j]);
		}	
		printf("\n");
	}
	return (0);
}
