#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	struct today {
		char tenki[10];
		int kion;
	};

	struct today kyo;

	kyo.kion = 32;
	printf("今日の気温は%d度でした\n", kyo.kion);

	printf("今日の天気を入力してください\n");
	scanf("%s", kyo.tenki);

	printf("ははぁ。今日の天気は%sですか。世も末ですねえ\n", kyo.tenki);

	return 0;
}