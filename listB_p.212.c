#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

	f = scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

	printf("\n入力した数値の数は%d個でした\n", f);

	return 0;
}