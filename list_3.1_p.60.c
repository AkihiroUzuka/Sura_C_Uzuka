#include <stdio.h>

int main(void) {

	printf("%d\n", 1 + 1);

	printf("%d\n", 1 - 1);

	printf("1+1=%d\n", 1 + 1);

	printf("5+5=%d\n", 1 + 1);

	printf("5/2=%d\n", 5 / 2); //切り捨てられる

	printf("5/2=%f\n", 5 / 2);

	printf("5/2=%f\n", 5.0 / 2.0);

	printf("7/4の余りは%dです\n", 7 % 4);

	return 0;
}