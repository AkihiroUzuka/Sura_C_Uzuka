#include <stdio.h>

int main(void) {

	int a = 100;
	int b = 0;

	int *pa;

	pa = &a;
	printf("変数aのアドレスは%pです\n", pa);

	pa = &b;
	printf("変数bのアドレスは%pです\n", pa);

	return 0;
}