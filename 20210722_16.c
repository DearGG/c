#include<stdio.h>

//�������ƽ������������-1ʱ�������ֵ�����
int main(){
	int sum = 0;
	int i = 0;
	int c = 0;
	int avg = 0;
	printf("��ƽ����,����-1����\n\n");
	
	printf("����һ������:");
	scanf("%d",&i);
	while(i!=-1){
		sum += i;
		c++;
		printf("��������:");
		scanf("%d",&i);
	}
	printf("%d�����ֵ�ƽ����Ϊ%f",c,1.0*sum/c);
	
	
	return 0;
} 
