#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��������Ϸ

int main(){
	int i = 0;
	int a = 0;
	int c = 0;
	srand((unsigned)time(NULL)); 
	i = rand()%100;
	printf("��������Ϸ��������1-100������\n"); 
	do{
		printf("��������:");
		scanf("%d",&a);
		c++;
		if(a>i){
			printf("̫����\n");
		}else if(a<i){
			printf("̫С��\n");
		}
	}while(a!=i);
	printf("��ϲ��¶��ˣ�ʹ����%d�λ���",c);
	return 0;
} 
