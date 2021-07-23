#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//猜数字游戏

int main(){
	int i = 0;
	int a = 0;
	int c = 0;
	srand((unsigned)time(NULL)); 
	i = rand()%100;
	printf("猜数字游戏，请输入1-100的数字\n"); 
	do{
		printf("输入数字:");
		scanf("%d",&a);
		c++;
		if(a>i){
			printf("太大了\n");
		}else if(a<i){
			printf("太小了\n");
		}
	}while(a!=i);
	printf("恭喜你猜对了，使用了%d次机会",c);
	return 0;
} 
