#include<stdio.h>
//求两个整数的最大公约数 

int main(){
	int a = 0;
	int b = 0;
	int min;
	int ret = 1;
	int max = ret;
	printf("输入两个数：");
	scanf("%d %d",&a,&b);
	
	if(a>b){
		min = b;
	}else{
		min = a;
	}
	for(ret = 1;ret<=min;ret++){
		if(a%ret==0){
			if(b%ret==0){
				if(ret>max){
					max = ret;
				}
			}
		}
	}
	printf("%d 和 %d 的最大公约数为：%d",a,b,max);
	return 0;
}
