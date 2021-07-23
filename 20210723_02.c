#include<stdio.h>

//求一个数的阶乘 

int main(){
	int n = 3;
	int fact = 1;
	int i;
	for(i=2;i<=n;i++){
		fact *= i;
	}
	printf("%d",fact);
	
	return 0;
}
