#include <stdio.h>

int a = 1;

void ayamaru(void) {

	int a = 2;
	printf("ayamaru関数からのお知らせです\n");
	printf("a（ローカル変数）の中身は%dです\n\n", a);

	return;
}

int main(void) {
	
	ayamaru();

	printf("main関数からのお知らせです\n");
	printf("a（グローバル変数）の中身は%dです\n", a);
	
	return 0;
}