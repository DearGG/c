#include<stdio.h>

int main(){
	//二维数组初始化 
	int a[2][2] = {1,2,3,4};
	int i,j;
	//二维数组遍历 
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",a[i][j]);
		}
	} 
} 
