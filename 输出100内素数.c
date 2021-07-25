#include<stdio.h>

//练习：输出100以内的素数

int main(){
	int s=2;
	
	while(s<=100){
		int sign = 0;
		int i = 0;
		for(i=2;i<s;i++){
			if(s%i==0){
				sign = 1;
			}
		}
		if(sign==0){
			printf("%d ",s);
		}
		s++;
	}
	return 0;
} 
