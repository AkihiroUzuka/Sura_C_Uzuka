#include<stdio.h>

int main(void) {

	int *pa;

	int a = 0;
	pa = &a;

	a = 10;

	printf("変数aの中身は%dです\n", a);
	printf("変数aの「アドレス」に、5を格納します\n\n");
	*pa = 5;

	printf("変数aの中身は、%dです\n", a);

	return 0;
}