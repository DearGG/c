#include<stdio.h>

void swap(int a[],int len,int *min,int *max);
int main(){
	int arr[6]={2,45,6623,7,43,2};
	int min,max;
	swap(arr,6,&min,&max);
	printf("arr��Сֵ:%d\n",min);
	printf("arr���ֵ:%d\n",max);
}

void swap(int a[],int len,int *min,int *max){
	int i;
	*min=a[0];
	*max=a[0];
	for(i=0;i<len;i++){
		if(*min>a[i]){
			*min=a[i];
		}
		if(*max<a[i]){
			*max=a[i];
		}
	}
}
