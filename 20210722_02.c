#include <stdio.h>

//计算时间差

int main(){
	int h1;
	int h2;
	int m1;
	int m2;
	int t1,t2;
	
	scanf("%d %d",&h1,&m1);
	scanf("%d %d",&h2,&m2);
	
	t1 = h1*60 + m1;
	t2 = h2*60 + m2;
	
	printf("时间差是%d时%d分",(t2-t1)/60,(t2-t1)%60);
	
	
	return 0;
}
 
