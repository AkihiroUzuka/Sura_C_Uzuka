#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 0;
	int b = 0;
	int c = 0;

	printf("������A�󂩂珗�̎q���~���Ă����I\n");
	printf("�P�������Ȃ��ᎀ�񂶂Ⴄ��\n");
	printf("�Q�����~�������t�j�q�̖{��\n");

	scanf("%d", &c);

	if (c == 1) b = 2;
	if (c == 2) b = 1;

	printf("�u�N�b�L�[���Ă����񂾂��E�E�E�E�A�H�ׂĂ����H\n");
	printf("�P��������񂾂�I\n");
	printf("�Q�������q�v�Ƃ��A�ԈႦ�ĂȂ��E�E�E�E�H\n");
	printf("�R���Ȃ񂩁A�l�Ԃ��H�ׂ�ׂ��łȂ��L�C��������orz\n");
	printf("�S���l�A�N�b�L�[�͌����Ȃ񂾁A����A�ނ��돗�q�������Ȃ�\n");

	scanf("%d", &c);

	switch (c) {
	case 1: a = 10;
		break;
	case 2: a = 4;
		break;
	case 3: a = -10;
		break;
	case 4: a = 100;
		break;
	}

	if (a >= 5 && b == 1) printf("�g�D���[�G���h");
	if (a >= 5 && b != 1) printf("�������F�B�ł��܂��傤�G���h");
	if (a < 5 && b == 1) printf("�S�{�G���h");
	if (a < 5 && b != 1) printf("�o�b�h�G���h");

	return 0;
}