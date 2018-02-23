#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void) {

	int a = 0;
	short int b = 30000;

	a = b;

	printf("変数a（大きなバケツ）の中身は、%dです", a);

	return 0;
}