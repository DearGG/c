#include<stdio.h>

/*
	给定不超过6的整数A，考虑从A开始的连续4个数字，请输出所有由他们组成的无重复数字的3位数
	要求：从小到大输出，每行6个整数，行末不能有空格 
*/ 

int main(){
	int a;
	int cnt=0;
	int i,j,k;
	printf("输入一个数：");
	scanf("%d",&a);
	if(a>6){
		printf("输入数字超过6");
		return 0;
	}
	for(i=a;i<=a+3;i++){
		for(j=a;j<=a+3;j++){
			for(k=a;k<=a+3;k++){
				if(i!=j && j!=k &&  i!=k){
					printf("%d%d%d",i,j,k);
					cnt++;
					if(cnt%6==0){
						printf("\n");
					}else{
						printf(" ");
					}
				}
			}
		}
	}
	return 0;
}
