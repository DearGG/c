#include<stdio.h>

int main(){
	enum Name{
		zhangsan=21,lisi=22,wangwu=23
	}name;
	printf("张三的年龄：%d\n",name = zhangsan);
	printf("李四的年龄：%d\n",name = lisi);
	printf("王五的年龄：%d\n",name = wangwu);
	return 0;
}
