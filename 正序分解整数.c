#include<stdio.h>

int main(){
	int x = 0;
	int t = 0;
	
	printf("ÊäÈë£º");
	scanf("%d",&x);
	do{
		t=t*10+x%10;	// 2 21
		x=x/10;			// 1 0
	}while(x>0);
	do{
		x = t%10;
		t/=10;
		printf("%d ",x);
	}while(t>0);
	

	
	return 0;
}
