#include<stdio.h>

//找零计算器 
int main(){
	float price = 0;
	float bill = 0;
	
	printf("请输入账单金额:");
	scanf("%f",&bill);
	printf("请输入支付金额:");
	scanf("%f",&price);
	
	if(price-bill<0){
		printf("提示：支付金额不足,还差%f元\n",bill-price);
	}else if(price-bill>0){
		printf("找零%f元\n欢迎下次光临",(price-bill));
	}else{
		printf("无需找零，欢迎下次光临");
	}
	return 0;
} 
