#include<stdio.h>

//ifǶ����� �������������ҳ����ֵ

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b){
		if(a>c){
			printf("���ֵΪ��%d\n",a);
		}else{
			printf("���ֵΪ��%d\n",c);
		}
	}else{
		if(b>c){
			printf("���ֵΪ��%d\n",b);
		}else{
			printf("���ֵΪ��%d\n",c);
		}
	}
	return 0;
} 
