#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	FILE *f;

	struct today {
		char tenki[10];
		int kion;
	};

	struct body {
		float shincho;
		float taiju;
		float bmi;
	};

	struct today kyo;
	struct body ore;

	printf("今日の天気を入力してください\n");
	scanf("%s", kyo.tenki);
	printf("今日の気温をに整数で入力してください\n");
	scanf("%d", &kyo.kion);

	printf("今日の身長を実数で入力してください\n");
	scanf("%f", &ore.shincho);
	printf("今日の体重を実数で入力してください\n");
	scanf("%f", &ore.taiju);

	ore.shincho = ore.shincho / 100;
	ore.bmi = ore.taiju / ore.shincho / ore.shincho;

	f = fopen("test.txt", "a");

	if (f == NULL) {
		printf("ファイルが開けなかった\n");
		return 1;
	}

	else {
		printf("ファイルが開けたぞ\n");
	}

	fprintf(f, "今日の天気は%sでしたよ。%sの日は学校に行きたくないです。\n", kyo.tenki, kyo.tenki);

	if (kyo.kion > 30) fprintf(f, "今日は暑すぎて"
		"学校に行きたくない日でした。\n");
	

	if (kyo.kion < 10) fprintf(f, "今日は寒すぎて"
		"学校に行きたくない日でした。\n");

	if (kyo.kion <= 30 && kyo.kion >= 10) fprintf(f, "今日は気候が良くて、学校へ行くのがもったいない日でした。\n");

	if (ore.bmi > 25.0) fprintf(f, "今日の体格指数は%fだ。"
		"もしや太りすぎでは？　学校ではなく事務に行かなくては。\n\n", ore.bmi);

	if (ore.bmi < 18.5) fprintf(f, "今日の体格指数は%fだ。"
		"これは痩せすぎだな　効率的に食べるために自宅にいよう。\n\n", ore.bmi);

	if (ore.bmi <= 25.0 && ore.bmi>= 18.5) fprintf(f, "今日の体格指数は%fだ。ちょうどいい感じだ。"
		"自分にご褒美をあげるため、学校を休もう\n\n", ore.bmi);

	fclose(f);
	printf("ファイルを閉じました\n");

	return 0;

	}
