#include<stdio.h>

int main(){
	//��ʹ�ö���ռ� 
	int a = 5;
	int b = 6;
	int c;
	
	a = a+b;
	b = a%b;
	a = a-b;
	printf("a:%d b:%d\n",a,b);
	//ʹ�ö���ռ�
	a = 5;
	b = 6;
	c = a;
	a = b;
	b = c;
	printf("a:%d b:%d\n",a,b);
} 
