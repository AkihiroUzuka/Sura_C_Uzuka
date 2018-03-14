#include <stdio.h>

int a = 0;

void sippai(void) {

	int b = 0;
	static int c = 0;

	a = a + 1;
	b = b + 1;
	c = c + 1;

	printf("岡嶋くんは%d回　%d回　%d回失敗しました\n", a, b, c);

	return;
	}

int main(void) {
	printf("　　　　　 a　   b　  c\n");

	for (int i = 1; i <= 5; i = i + 1) sippai();

	return 0;
}