#include<stdio.h>

//break�����ͽ���ָgoto��� 

int main(){
	int a=0;
	int b=0;
	int c=0;//��break���������У�����ʹ��c��Ϊ��־λ 
	for(a=1;a<5;a++){
		for(b=1;b<5;b++){
			//���Ǽ��赱a=3ʱ��������ѭ�� 
			if(a==3){
				c=1;
				break;
			}
		}
		if(c==1){
			break;
		}
		printf("%d",a);
	}
	//goto��������ת��������ָ���ĵط�
	 for(a=1;a<5;a++){
		for(b=1;b<5;b++){
			//���Ǽ��赱a=3ʱ��������ѭ�� 
			if(a==3){
				goto out;
			}
		}
		printf("%d",a);
	}
	out:
	return 0;
} 
