#include <stdio.h>

int main(void) {

	int a = 1;
	int b = 2;

	printf("a�̒��g��%d�ł�\n", a);
	printf("b�̒��g��%d�ł�\n", b);

	a = b;
	printf("a�̒��g��%d�ɂȂ�܂���", a);

	return 0;
}