#include<stdio.h>

int main(){
	int i=0;
	int n=0;
	double sum;
	printf("��1��1/n�ĺͣ����룺");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum+=1.0/i;
	}
	printf("1��1/%d�ĺ�Ϊ��%f",n,sum);
}
