#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE *f;

	f = fopen("test.txt", "w");
	fclose(f);
	printf("ファイルを開いて閉じました\n");

	return 0;
}