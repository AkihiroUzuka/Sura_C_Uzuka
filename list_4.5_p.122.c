#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 0;
	int b = 0;

	printf("�����x�𐮐��œ��͂��Ă�������\n");
	scanf("%d", &a);

	printf("�t���OON�Ȃ�P�AOFF�Ȃ炻��ȊO�̐�������͂��Ă�������\n");
	scanf("%d", &b);

	if (a >= 5) {
		if (b == 1) { printf("�g�D���[�G���h"); }
		else { printf("�������F�B�ł��܂��傤�G���h"); }
	}
	else {
		if (b == 1) { printf("�S�{�G���h"); }
		else { printf("�o�b�g�G���h"); }
	}

	return 0;
}