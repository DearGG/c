#include<stdio.h>

int main(){
	int a[3]={1,2,3};
	int size = sizeof(a)/sizeof(a[0]);
	printf("%d\n",size);
	return 0;
}
