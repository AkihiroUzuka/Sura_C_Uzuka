#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 7;
	int b = 0;
	printf("�����ăQ�[�������܂��傤�I\n");
	printf("��������͂��Ă���������\n");

	scanf("%d", &b);

	while (a!=b) {

		if (b == 1234) break;
		printf("�n�Y���ł�\n");
		scanf("%d", &b);

	}

	printf("�����ł��I");

	return 0;
}