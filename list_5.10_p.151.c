#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 10;

	while (a) {
		scanf("%d", &a);
	}

	printf("０を押すとループを抜けるのでした\n");

	return 0;
}