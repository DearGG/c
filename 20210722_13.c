#include<stdio.h> 

int main(){
	int i;
	int count = 0;
	printf("����һ������:");
	scanf("%d",&i);
	
	do{
		i /= 10;
		count++;
	}while(i>0);
	
	printf("���������%dλ����",count);
	
	return 0;
}
