#include<stdio.h> 

//�ɼ����� 

int main(){
	int score;
	printf("��������ĳɼ�:");
	scanf("%d",&score);
	score = score/10;
	switch(score){
		case 10:
			printf("��ĳɼ�����Ϊ:S\n");
			break;
		case 9:
			printf("��ĳɼ�����Ϊ:A\n");
			break;
		case 8:
			printf("��ĳɼ�����Ϊ:B\n");
			break;
		case 7:
			printf("��ĳɼ�����Ϊ:C\n");
			break;
		case 6:
			printf("��ĳɼ�����Ϊ:D\n");
			break;
		default:
			printf("��ĳɼ�����Ϊ:E\n");
	}
	return 0;
}
