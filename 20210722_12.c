#include<stdio.h> 

//ʹ��whileѭ�����ж�һ�������Ǽ�λ

int main(){
	int i = 0;
	int count = 1;
	printf("������һ������:");
	scanf("%d",&i);
	
	i /= 10;
	
	while(i>0){
		count++;
		i /= 10;
	}
	
	printf("�������һ�� %d λ",count);
	
	return 0;
} 
