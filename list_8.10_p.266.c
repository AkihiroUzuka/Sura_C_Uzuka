#include<stdio.h>

int main(void) {

	int a, b;

	for (a = 1; a <= 10; a = a + 1)
		printf("%d\n", a);

	for (b = 1; b <= 10; b = b + 1)
		printf("%d\n", a);

	return 0;
}