#include<stdio.h>


int main()//������:������� 
{
	//hello world
	printf("helloworld\n");

	//��������
	char ch = 'c';
	int i = 20;
	printf("%c\n", ch);
	printf("%d\n", i);

	//����short������ֵ
	short s = 14;
	printf("%d\n", s);
	float f = 96.4f;
	printf("%f\n", f);

	//���Բ�ͬ�������ݵĴ�С
	printf("int:%d\n", sizeof(int));
	printf("short:%d\n", sizeof(short));
	printf("char:%d\n", sizeof(char));
	printf("long:%d\n", sizeof(long));
	printf("long long:%d\n", sizeof(long long));
	printf("float:%d\n", sizeof(float));
	printf("double:%d\n", sizeof(double));
	
	//����demo02�е�ȫ�ֱ���
	extern int num;
	printf("%d\n", num);

	demo02();
	return 0;
	
}