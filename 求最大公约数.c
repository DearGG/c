#include<stdio.h>
//���������������Լ�� 

int main(){
	int a = 0;
	int b = 0;
	int min;
	int ret = 1;
	int max = ret;
	printf("������������");
	scanf("%d %d",&a,&b);
	
	if(a>b){
		min = b;
	}else{
		min = a;
	}
	for(ret = 1;ret<=min;ret++){
		if(a%ret==0){
			if(b%ret==0){
				if(ret>max){
					max = ret;
				}
			}
		}
	}
	printf("%d �� %d �����Լ��Ϊ��%d",a,b,max);
	return 0;
}
