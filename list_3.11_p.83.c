#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 0;
	int b = 0;
	int c = 0; //ver.2.0 p.84

	printf("�|���Z�v�Z�@�ւ悤�����I\n");
	printf("�������鐔�i��������j����͂��Ă�������\n");
		scanf("%d", &a);
	printf("�����鐔(��������j����͂��Ă�������\n");
		scanf("%d", &b);
		c = a * b; //ver.2.0 p.84
	printf("%d��%d��������ƁA%d�ɂȂ�܂�", a, b, c); //ver.2.0 p.84

	return 0;
}