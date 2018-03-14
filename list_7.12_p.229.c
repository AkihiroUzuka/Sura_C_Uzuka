#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void shinri(char a[], int b);

int main(void) {

	char c[50];
	int d;

	printf("なにか著者を慰めるセリフを入力してください\n");
	scanf("%s", c);

	printf("世の中の心理を表示します。何回表示しますか？\n");
	scanf("%d", &d);

	shinri(c, d);

	return 0;
}

void shinri(char a[], int b) {

	for (int i = 1; i <= b; i++) {
		printf("%s　ただし二次元の中に限る\n", a);
	}

	return;
}