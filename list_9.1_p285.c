#include <stdio.h>

int main(void) {

	struct today {
		char tenki[10];
		int kion;
	};

	struct today kyo;

	kyo.kion = 32;
	printf("今日の気温は%d度でした\n", kyo.kion);

	return 0;
}