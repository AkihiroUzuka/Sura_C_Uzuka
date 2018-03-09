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

	ayamaru();

	int c = 3;
	printf("main関数からのお知らせです\n");
	printf("a（グローバル変数）の中身は%dです\n", a);
	printf("c（ローカル変数）の中身は%dです\n", c);

	return 0;
}