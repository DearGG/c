#include<stdio.h> 

//成绩评分 

int main(){
	int score;
	printf("请输入你的成绩:");
	scanf("%d",&score);
	score = score/10;
	switch(score){
		case 10:
			printf("你的成绩评分为:S\n");
			break;
		case 9:
			printf("你的成绩评分为:A\n");
			break;
		case 8:
			printf("你的成绩评分为:B\n");
			break;
		case 7:
			printf("你的成绩评分为:C\n");
			break;
		case 6:
			printf("你的成绩评分为:D\n");
			break;
		default:
			printf("你的成绩评分为:E\n");
	}
	return 0;
}
