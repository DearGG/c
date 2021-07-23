#include<stdio.h>

int main(){
	//不使用额外空间 
	int a = 5;
	int b = 6;
	int c;
	
	a = a+b;
	b = a%b;
	a = a-b;
	printf("a:%d b:%d\n",a,b);
	//使用额外空间
	a = 5;
	b = 6;
	c = a;
	a = b;
	b = c;
	printf("a:%d b:%d\n",a,b);
} 
