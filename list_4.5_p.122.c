#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 0;
	int b = 0;

	printf("高感度を整数で入力してください\n");
	scanf("%d", &a);

	printf("フラグONなら１、OFFならそれ以外の整数を入力してください\n");
	scanf("%d", &b);

	if (a >= 5) {
		if (b == 1) { printf("トゥルーエンド"); }
		else { printf("いいお友達でいましょうエンド"); }
	}
	else {
		if (b == 1) { printf("鬼畜エンド"); }
		else { printf("バットエンド"); }
	}

	return 0;
}