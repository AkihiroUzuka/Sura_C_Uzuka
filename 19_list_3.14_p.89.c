#include <stdio.h>

int main(void) {

	short int a = 0;
	int b = 60000;

	a = b;

	printf("変数a（小さなバケツ）の中身は、%dです", a);

	return 0;
}