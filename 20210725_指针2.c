#include<stdio.h>

//ָ����ʺ��޸ı��� 

int main(){
	int i=0;
	int *p = &i;
	//���ʱ��� 
	printf("ʹ��ָ����ʣ�i:%d\n",*p);
	//�޸ı���
	printf("ʹ��ָ���޸ı�����i:%d\n",*p=26); 
	return 0;
} 
