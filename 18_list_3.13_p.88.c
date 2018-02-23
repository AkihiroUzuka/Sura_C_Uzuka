#define _SRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void) {

	float a = 0.0;
	int b = 30000;

	a = b;

	printf("変数a（大きなバケツ）の中身は、%fです", a);

	return 0;
}