#include<stdio.h> 

int main(){
	int h1,h2;
	int m1,m2;
	int h3,m3;
	scanf("%d %d",&h1,&m1);
	scanf("%d %d",&h2,&m2);
	
	h3 = h2-h1;
	m3 = m2-m1;
	if(m3<0){
		m3+=60;
		h3--;
	}
	printf("时间差为：%d时%d分",h3,m3);
	
	return 0;
}
