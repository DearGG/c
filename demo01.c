#include<stdio.h>


int main()//主函数:程序入口 
{
	//hello world
	printf("helloworld\n");

	//数据类型
	char ch = 'c';
	int i = 20;
	printf("%c\n", ch);
	printf("%d\n", i);

	//测试short类型数值
	short s = 14;
	printf("%d\n", s);
	float f = 96.4f;
	printf("%f\n", f);

	//测试不同类型数据的大小
	printf("int:%d\n", sizeof(int));
	printf("short:%d\n", sizeof(short));
	printf("char:%d\n", sizeof(char));
	printf("long:%d\n", sizeof(long));
	printf("long long:%d\n", sizeof(long long));
	printf("float:%d\n", sizeof(float));
	printf("double:%d\n", sizeof(double));
	
	//声明demo02中的全局变量
	extern int num;
	printf("%d\n", num);

	demo02();
	return 0;
	
}