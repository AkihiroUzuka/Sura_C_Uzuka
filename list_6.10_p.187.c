#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 0;

	printf("なにか整数を入力してください\n");
	scanf("%d", &a);

	printf("あなたが入力した数値は%dですね", a);

	return 0;
}