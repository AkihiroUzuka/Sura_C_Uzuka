#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int a = 0;

	printf("���t�^�肢�ɂ悤�����I\n");
	printf("A�^�Ȃ�P�AB�^�Ȃ�Q�AO�^�Ȃ�R�AAB�^�Ȃ�S����͂��Ă�������\n");

	scanf("%d", &a);

	switch (a)
	{
	case 1:
		printf("�͂͂��A�{���ʂȂ�ł���\n");
		printf("�����ɂ͎ア�����ł���\n");
		break;

	case 2:
		printf("�V�^ࣖ��Ȃ�ł���\n");
		break;

	case 3:
		printf("�e�����Ȃ�ł���\n");
		break;

	case 4:
		printf("�m���~�������Ȃ�ł���\n");
		break;
}

	return 0;
}