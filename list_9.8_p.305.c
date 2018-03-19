#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE *f;

	f = fopen("test.txt", "a");

	if (f == NULL) {
		printf("ファイルが開けなかった\n");
		return 1;
	}

	else {
		printf("ファイルが開けたぞ！\n");
	}

	fprintf(f, "本当に書き込めるのかな？\n");
	fprintf(f, "なんだか失敗しそうな気がするぞ！\n");

	fclose(f);
	printf("ファイルを閉じました\n");

	return 0;
}