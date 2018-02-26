#include <stdio.h>

int main(void) {

	int a;

	for (a = 1; a <= 10; a = a + 1)
	{
		printf("今現在のaの中身は、%dです\n", a);
	}

	printf("今はもうループから抜けています。変数aの中身は%dです\n", a);

	return 0;
}