#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 7;
	int b = 0;
	printf("数あてゲームをしましょう！\n");
	printf("整数を入力してくださいね\n");

	scanf("%d", &b);

	while (a!=b) {

		if (b == 1234) break;
		printf("ハズレです\n");
		scanf("%d", &b);

	}

	printf("正解です！");

	return 0;
}