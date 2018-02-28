#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 7;
	int b = 0;
	printf("数あてゲームをしましょう！\n");
	printf("整数を入力してくださいね\n");

	do {
		scanf("%d", &b);
		printf("ハズレですね\n");

	} while (a != b);

	printf("正解です！\n");

	return 0;

}