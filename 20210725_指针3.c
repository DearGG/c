#include<stdio.h> 

//使用指针输出变量地址
int main(){
	int i=0;
	int *p = &i;
	printf("%p",p);
	return 0;
} 
