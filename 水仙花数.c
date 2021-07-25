#include<stdio.h>

/*
	给定一个数字n，水仙花数是每位上的数字的n次幂之和等于它本身
	要求输出3<=N<=7 
*/

int main(){
	int x;									//x是输入的位数 
	int i=1;
	int first = 1;
	scanf("%d",&x);
	while(i<x){
		first*=10;							//输入是4时，输出1000 
		i++;
	}
	i=first;
	while(i<first*10){ 						//加入输入是3 i=100 first*10=1000 输出100-999的水仙花数 
		int t = i; 							//临时变量t，用来记录该轮循环的i的值 
		int sum = 0; 						//如果i的每一位的n次幂，等于sum，则说明这个数是水仙花数 
		while(t!=0){ 						//先取出数字每一位的值 
			int d = t%10;
			int p = 0;
			int a = 1;
			t /= 10;
			while(p<x){
				a *= d;
				p++;
			}
			sum +=a;
		}
		if(sum==i){							//判断每一位的n次幂的和与初始值是否相等 
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
} 
