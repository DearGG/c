#include<stdio.h>

/*
	����������6������A�����Ǵ�A��ʼ������4�����֣������������������ɵ����ظ����ֵ�3λ��
	Ҫ�󣺴�С���������ÿ��6����������ĩ�����пո� 
*/ 

int main(){
	int a;
	int cnt=0;
	int i,j,k;
	printf("����һ������");
	scanf("%d",&a);
	if(a>6){
		printf("�������ֳ���6");
		return 0;
	}
	for(i=a;i<=a+3;i++){
		for(j=a;j<=a+3;j++){
			for(k=a;k<=a+3;k++){
				if(i!=j && j!=k &&  i!=k){
					printf("%d%d%d",i,j,k);
					cnt++;
					if(cnt%6==0){
						printf("\n");
					}else{
						printf(" ");
					}
				}
			}
		}
	}
	return 0;
}
