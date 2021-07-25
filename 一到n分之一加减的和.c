#include<stdio.h>

//练习：1-1/2+1/3-1/4+...+1/n

int main(){
	int i=0;
	int n=0;
	double sum;
	printf("求1到1/n的和，输入：");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%2==0){
			sum-=1.0/i;
		}else{
			sum+=1.0/i;
		}
	}
	printf("1到1/%d的加和减为：%f",n,sum);
}
