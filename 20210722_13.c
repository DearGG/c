#include<stdio.h> 

int main(){
	int i;
	int count = 0;
	printf("输入一个数字:");
	scanf("%d",&i);
	
	do{
		i /= 10;
		count++;
	}while(i>0);
	
	printf("你输入的是%d位数字",count);
	
	return 0;
}
