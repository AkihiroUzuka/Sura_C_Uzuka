#include <stdio.h>

int main(void) {

	char a[6] = "abcde";

	for (int i = 0; i <= 5; i = i + 1) {

		printf("%c", a[i]);

			}

	printf("\n");

	for (int i = 0; i <= 5; i = i + 1) {

		printf("%c ", a[i]);

	}

	return 0;
}