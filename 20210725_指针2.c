#include<stdio.h>

//指针访问和修改变量 

int main(){
	int i=0;
	int *p = &i;
	//访问变量 
	printf("使用指针访问，i:%d\n",*p);
	//修改变量
	printf("使用指针修改变量后，i:%d\n",*p=26); 
	return 0;
} 
