#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE *f;
	f = fopen("test.txt", "r");

	if (f == NULL) {
		printf("ファイルが開けなかった\n");

		return 1;
	}
	else {
		printf("ファイルが開けたぞ！\n");
	}


	fclose(f);
	printf("ファイルを閉じました\n");

	return 0;
}