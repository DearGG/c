#include<stdio.h>

/*
	����һ������n��ˮ�ɻ�����ÿλ�ϵ����ֵ�n����֮�͵���������
	Ҫ�����3<=N<=7 
*/

int main(){
	int x;									//x�������λ�� 
	int i=1;
	int first = 1;
	scanf("%d",&x);
	while(i<x){
		first*=10;							//������4ʱ�����1000 
		i++;
	}
	i=first;
	while(i<first*10){ 						//����������3 i=100 first*10=1000 ���100-999��ˮ�ɻ��� 
		int t = i; 							//��ʱ����t��������¼����ѭ����i��ֵ 
		int sum = 0; 						//���i��ÿһλ��n���ݣ�����sum����˵���������ˮ�ɻ��� 
		while(t!=0){ 						//��ȡ������ÿһλ��ֵ 
			int d = t%10;
			int p = 0;
			int a = 1;
			t /= 10;
			while(p<x){
				a *= d;
				p++;
			}
			sum +=a;
		}
		if(sum==i){							//�ж�ÿһλ��n���ݵĺ����ʼֵ�Ƿ���� 
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
} 
