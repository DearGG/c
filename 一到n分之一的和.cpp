#include<stdio.h>

int main(){
	int i=0;
	int n=0;
	double sum;
	printf("求1到1/n的和，输入：");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum+=1.0/i;
	}
	printf("1到1/%d的和为：%f",n,sum);
}
