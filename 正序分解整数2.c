#include<stdio.h>

int main(){
	int x = 0;
	int temp= 0;
	int size = 1;
	printf("ÊäÈë£º");
	scanf("%d",&x);
	temp=x;
	while(x>9){
		size*=10;
		x/=10;
	}
	do{
		printf("%d ",temp/size);
		temp=temp%size;
		size/=10;
	}while(size>0);
	return 0;
}
