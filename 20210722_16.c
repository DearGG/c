#include<stdio.h>

//求输入的平均数，当输入-1时结束数字的输入
int main(){
	int sum = 0;
	int i = 0;
	int c = 0;
	int avg = 0;
	printf("求平均数,输入-1结束\n\n");
	
	printf("输入一个数字:");
	scanf("%d",&i);
	while(i!=-1){
		sum += i;
		c++;
		printf("输入数字:");
		scanf("%d",&i);
	}
	printf("%d个数字的平均数为%f",c,1.0*sum/c);
	
	
	return 0;
} 
