#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 7;
	int b = 0;
	printf("�����ăQ�[�������܂��傤�I\n");
	printf("��������͂��Ă���������\n");
	scanf("%d", &b);//�����ŃA���t�@�x�b�g����͂���ƁA�������[�v�Ɋׂ�B

	while (a != b) {
		
		if (b == 1234) { scanf("%d", &b); continue; } 

		printf("�n�Y���ł�\n");
		scanf("%d", &b);
	}

	printf("�����ł��I\n");
	
	return 0;
}