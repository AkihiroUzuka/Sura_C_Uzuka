#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 0;
	int b = 0;
	int c = 0;

	printf("うわっ、空から女の子が降ってきた！\n");
	printf("１＝逃げなきゃ死んじゃうよ\n");
	printf("２＝下敷きこそ青春男子の本懐\n");

	scanf("%d", &c);

	if (c == 1) b = 2;
	if (c == 2) b = 1;

	printf("「クッキーを焼いたんだけ・・・・、食べてくれる？\n");
	printf("１＝もちろんだよ！\n");
	printf("２＝佐藤敏夫とか、間違えてない・・・・？\n");
	printf("３＝なんか、人間が食べるべきでない臭気を感じるorz\n");
	printf("４＝僕、クッキーは嫌いなんだ、いや、むしろ女子が嫌いなんだ\n");

	scanf("%d", &c);

	switch (c) {
	case 1: a = 10;
		break;
	case 2: a = 4;
		break;
	case 3: a = -10;
		break;
	case 4: a = 100;
		break;
	}

	if (a >= 5 && b == 1) printf("トゥルーエンド");
	if (a >= 5 && b != 1) printf("いいお友達でいましょうエンド");
	if (a < 5 && b == 1) printf("鬼畜エンド");
	if (a < 5 && b != 1) printf("バッドエンド");

	return 0;
}