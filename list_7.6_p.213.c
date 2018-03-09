#include <stdio.h>

int ayamaru(int a) {
	a = a + 5;
	for (int i = 1; i <= a; i++)printf("ごめんなさい\n");

	return a;
}

int main(void) {

	int b;
	int c = 5;

	printf("岡嶋くん、気持ち悪いからあっちに行ってよ\n");
	b = ayamaru(c);

	printf("変数cの中身は%dです\n", c);

	return 0;
}