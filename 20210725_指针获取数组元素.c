#include<stdio.h>

int main(){
	int arr[6]={1,2,3,4,5,6};
	int *p = &arr[0];
	
	printf("����arr��2��Ԫ��ֵ��%d\n",*(p+1));
	printf("����arr��3��Ԫ��ֵ��%d\n",arr[0]+2);
	return 0;
}
