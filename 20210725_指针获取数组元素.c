#include<stdio.h>

int main(){
	int arr[6]={1,2,3,4,5,6};
	int *p = &arr[0];
	
	printf("数组arr第2个元素值：%d\n",*(p+1));
	printf("数组arr第3个元素值：%d\n",arr[0]+2);
	return 0;
}
