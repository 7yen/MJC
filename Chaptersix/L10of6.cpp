#include<stdio.h>
/*
	计算两个矩阵的积 ,矩阵输入 
*/ 
void addArr(const int x[2][3],const int y[3][2],int xy[2][2])
{	
	for(int i = 0;i < 2;i++){
		for(int m = 0;m < 2;m++){
		   for(int j = 0;j < 3;j++){
			xy[i][m] += x[i][j] * y[j][m];
			
	       }
		   printf("%3d",xy[i][m]);	
		}
		printf("\n");	
	  }
}
int main(void) 
{
	int x[2][3] = {0};
	int y[3][2] = {0};
	int xy[2][2] = {0};
	int num;
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 3;j++){
			scanf("%d",&num);
			x[i][j] = num;
		//	printf("%d",x[i][j]);
		}	
	}
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 2;j++){
			scanf("%d",&num);
			y[i][j] = num;
			//printf("%d",y[i][j]);
		}	
	}
	addArr(x,y,xy);
	
	return (0);
}
