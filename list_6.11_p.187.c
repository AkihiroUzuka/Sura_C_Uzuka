#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a[50];

	printf("なにか文字列を入力してください\n");
	scanf("%s", a);

	printf("あなたが入力した文字列は「%s」ですね", a);

	return 0;
}