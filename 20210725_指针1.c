#include<stdio.h>

void f(int *p);

int main(){
	int i = 0;
	int *p = &i;
	printf("%p\n",&i);
	f(&i);
	printf("%d\n",i);
	return 0;
}

void f(int *p){
	printf("%p\n",p);
	printf("%d\n",*p);
	*p = 26;
}
