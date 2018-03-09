#include <stdio.h>

int a = 1;

void ayamaru(void) {

	int b = 2;
	printf("ayamaru関数からのお知らせです\n");
	printf("a（グローバル変）の中身は%dです\n", a);
	printf("b（ローカル変数）の中身は%dです\n\n", b);

	return;
}

int main(void) {

	int b = 3;

	ayamaru();

	printf("main関数からのお知らせです\n");
	printf("a（グローバル変数）の中身は%dです\n", a);
	printf("b（ローカル変数）の中身は%dです\n", b);

	return 0;
}