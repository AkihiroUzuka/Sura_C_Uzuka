#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 0;

	printf("���t�肢�ɂ悤�����I");
	printf("A�^�Ȃ�P�AB�^�Ȃ�Q�AO�^�Ȃ�R�AAB�^�Ȃ�S����͂��Ă�������\n");

	scanf("%d", &a);

	if (a == 1) {printf  ("�͂͂��A�{���ʂȂ�ł���\n");
				printf("�����ɂ͎ア�����ł���\n"); }
	else if (a == 2) printf("�V�^ࣖ��Ȃ�ł���\n");
	else if (a == 3) printf("�e�����Ȃ�ł���\n");
	else if (a == 4) printf("�m���~�������Ȃ�ł���\n");
	else printf("�����Ƃ���Ă��������患");


	return 0;

}