#include<stdio.h>

#define MINOR 35

int main(){
	int age = 0;
	printf("�������������:");
	scanf("%d",&age);
	
	printf("�����%d�ꡣ\n",age);
	if(age<=MINOR){
		printf("���������õģ�");
	}
	printf("�����������ľ������磬�ú���ϧ�ɡ�");
}
