#include<stdio.h>

//��ϰ��ʹ��1�ǣ�2�ǣ�5�Ǵ�5ԪǮ

int main(){
	int one;
	int two;
	int five;
	float m;
	printf("��������Ҫ�յĽ��(Ԫ):");
	scanf("%f",&m);
	for(five=0;five<=m*10/5;five++){
		for(two=0;two<=m*10/2;two++){
			for(one=0;one<=m*10;one++){
				if(five*5+two*2+one==m*10){
					printf("%d��5�� %d��2�� %d��1��\n",five,two,one);
				}
			}
		}
	}
	return 0;
} 
