#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int a = 0;

	printf("��Ƌ���𔻒肷��v���O�����ł�\n");
	printf("��������͂��Ă�������\n");

	scanf("%d", &a);

	if (a % 2 == 0) printf("����͋����ł��I");
	else printf("����͊�ł��I");

	return 0;
}