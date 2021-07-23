#include<stdio.h>

//if嵌套语句 输入三个数，找出最大值

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b){
		if(a>c){
			printf("最大值为：%d\n",a);
		}else{
			printf("最大值为：%d\n",c);
		}
	}else{
		if(b>c){
			printf("最大值为：%d\n",b);
		}else{
			printf("最大值为：%d\n",c);
		}
	}
	return 0;
} 
