#include<stdio.h>

//��������� 
int main(){
	float price = 0;
	float bill = 0;
	
	printf("�������˵����:");
	scanf("%f",&bill);
	printf("������֧�����:");
	scanf("%f",&price);
	
	if(price-bill<0){
		printf("��ʾ��֧������,����%fԪ\n",bill-price);
	}else if(price-bill>0){
		printf("����%fԪ\n��ӭ�´ι���",(price-bill));
	}else{
		printf("�������㣬��ӭ�´ι���");
	}
	return 0;
} 
