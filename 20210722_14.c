#include<stdio.h>

//����log2(x) 

int main(){
	int x = 0;
	int c = 0;
	printf("����һ������:");
	scanf("%d",&x);
	int t = x;
	
	while(x>1){
		c++;
		x /= 2;
	}
	printf("log2(%d)=%d",t,c);
	
	return 0;
}
