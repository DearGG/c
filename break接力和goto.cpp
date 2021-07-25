#include<stdio.h>

//break接力和金手指goto语句 

int main(){
	int a=0;
	int b=0;
	int c=0;//在break接力方法中，我们使用c作为标志位 
	for(a=1;a<5;a++){
		for(b=1;b<5;b++){
			//我们假设当a=3时跳出所有循环 
			if(a==3){
				c=1;
				break;
			}
		}
		if(c==1){
			break;
		}
		printf("%d",a);
	}
	//goto语句可以跳转到代码中指定的地方
	 for(a=1;a<5;a++){
		for(b=1;b<5;b++){
			//我们假设当a=3时跳出所有循环 
			if(a==3){
				goto out;
			}
		}
		printf("%d",a);
	}
	out:
	return 0;
} 
