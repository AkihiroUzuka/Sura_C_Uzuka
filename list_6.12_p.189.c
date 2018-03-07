#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char a[100];
	printf("お名前を入力してください\n");
	scanf("%s", a);
	printf("へぇ～～っ。あなたのお名前は%sさんとおっしゃるのですか。"
		"友達が多そうな、いい名前ですね\n\n",a);

	printf("ご年齢を入力してください\n");
	scanf("%s", a);
	printf("うほっ。あなたは%s歳なのですね。"
		"お歳の割に落ち着いていて、思慮深をうだ\n\n", a);

	printf("ご出身地を入力してください\n");
	scanf("%s", a);
	printf("なんと！%sの出ですか？！　異性にもててもてて仕方がない"
		"のでしょうね。いやいや。うらやましいことこの上ない\n", a);

	return 0;
}