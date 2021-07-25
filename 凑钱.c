#include<stdio.h>

//练习：使用1角，2角，5角凑5元钱

int main(){
	int one;
	int two;
	int five;
	float m;
	printf("请输入需要凑的金额(元):");
	scanf("%f",&m);
	for(five=0;five<=m*10/5;five++){
		for(two=0;two<=m*10/2;two++){
			for(one=0;one<=m*10;one++){
				if(five*5+two*2+one==m*10){
					printf("%d个5角 %d个2角 %d个1角\n",five,two,one);
				}
			}
		}
	}
	return 0;
} 
