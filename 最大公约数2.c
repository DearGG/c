#include<stdio.h>
//使用辗转相除法求两个整数的最大公约数 

/*
	如果b等于0，计算结束，a就是最大公约数
	否则，计算a除以b的余数，让b等于b，而b等于那个余数
	回到第一步 
	a  b  t
	12 18 12
	18 12 6
	12 6  0
	6  0
*/

int main(){
	int a = 0;
	int b = 0;
	int t;
	printf("输入两个数：");
	scanf("%d %d",&a,&b);
	
	while(b!=0){
		t = a%b;
		a = b;
		b = t;
	}
	printf("最大公约数为：%d",a,b,a);
	return 0;
}
