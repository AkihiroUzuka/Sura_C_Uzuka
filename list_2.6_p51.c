#include <stdio.h>

int main(void) {

	printf("テストの結果は%u点でした\n", -10);

	printf("テストの結果は%d点でした\n", 10.0);

	printf("テストの結果は%f点でした\n", 10);

	printf("テストの結果は%c点でした\n", 'A');

	printf("テストの結果は%s点でした\n", "A+");

	printf("テストの結果は%d点でした\n", 'A');

	printf("テストの結果は%c点でした\n", 65);

	printf("テストの結果は%cでした。\n点数で言うと%d点です\n", 'A', 0);

	printf("テストの結果は%cでした。%c点数で言うと%d点です\n", 'A',10, 0);

	printf("\a");

	return 0;
}