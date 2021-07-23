#include<stdio.h> 

//使用while循环来判断一个数字是几位

int main(){
	int i = 0;
	int count = 1;
	printf("请输入一个数字:");
	scanf("%d",&i);
	
	i /= 10;
	
	while(i>0){
		count++;
		i /= 10;
	}
	
	printf("这个数字一共 %d 位",count);
	
	return 0;
} 
