#include<stdio.h>

//Á·Ï°£º¾Å¾Å³Ë·¨±í 

int main(){
	int i = 0;
	int j = 0;
	
	for(i=1;i<10;i++){
		for(j=1;j<=i;j++){
			printf("%d*%d=%d ",j,i,i*j);
			if(i*j>=10){
				printf(" ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
} 
