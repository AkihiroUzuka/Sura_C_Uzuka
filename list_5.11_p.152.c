#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 0;

	while (!a) {
		scanf("%d", &a);
	}

	printf("0以外を押すとループを抜けるのでした\n");

	return 0;
}