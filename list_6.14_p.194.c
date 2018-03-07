#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a[3][3];
	int i, j;

	a[0][0] = 5;
	a[0][1] = 5;
	a[0][2] = 5;
	a[1][0] = 5;
	a[1][1] = 5;
	a[1][2] = 4;
	a[2][0] = 5;
	a[2][1] = 3;
	a[2][2] = 2;

	for (int i = 0; i <= 2; i = i + 1) {
		for (int j = 0; j <= 2; j = j + 1) {
			printf("%d", a[i][j]);
		}
		printf("\n");
	}

	printf("あなたはどの辺にいますか。数値で入力してください\n");
	printf("0 ・・・北の方　1 ・・・真ん中　2 ・・・南の方\n");
	scanf("%d", &i);

	printf("あなたはどの辺にいますか。数値で入力してください\n");
	printf("0 ・・・西の方　1 ・・・真ん中　2 ・・・東の方\n");
	scanf("%d", &j);

	switch(a[i][j]) {

		case 1:
			printf("お城の中にいて快適ですね\n");
			break;

		case 2:
			printf("城下町はお金を使いすぎてしまいますね\n");
			break;

		case 3:
			printf("草原は気持ちがいいです\n");
			break;

		case 4:
			printf("沼沢地とかないわー、虫いそう\n");
			break;

		case 5:
			printf("・・・・・現状を受け入れて、楽しんでください\n");
			break;


	}



	return 0;
}