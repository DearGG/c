#include<stdio.h>

int main(){
	enum Name{
		zhangsan=21,lisi=22,wangwu=23
	}name;
	printf("���������䣺%d\n",name = zhangsan);
	printf("���ĵ����䣺%d\n",name = lisi);
	printf("��������䣺%d\n",name = wangwu);
	return 0;
}
