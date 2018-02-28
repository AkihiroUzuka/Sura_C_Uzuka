#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 7;
	int b = 0;
	printf("数あてゲームをしましょう！\n");
	printf("整数を入力してくださいね\n");
	//scanf("%d", &b);

	while (scanf("%d", &b),a != b)
	{
		printf("ハズレです\n");
		//scanf("%d", &b);
	}

	printf("正解です！\n");

	return 0;
}