#include<stdio.h>

//��ϰ��1-1/2+1/3-1/4+...+1/n

int main(){
	int i=0;
	int n=0;
	double sum;
	printf("��1��1/n�ĺͣ����룺");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%2==0){
			sum-=1.0/i;
		}else{
			sum+=1.0/i;
		}
	}
	printf("1��1/%d�ļӺͼ�Ϊ��%f",n,sum);
}
