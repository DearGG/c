#include<stdio.h>

//求序列前n项和 2/1+3/2+5/3...

int main(){
	int i,j;
	double k=2;
	double p=1;
	double sum=0;
	printf("input:");
	scanf("%d",&i);
	
	for(j=1;j<=i;j++){
		sum+=k/p;
		double t=k;
		k = k+p;
		p = t;
	}
	printf("output:%f",sum);
	return 0;
}  
