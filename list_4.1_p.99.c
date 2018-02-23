#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int a = 0;

	printf("奇数家具数化を判定するプログラムです\n");
	printf("整数を入力してください\n");

	scanf("%d", &a);

	if (a % 2 == 0) printf("これは偶数です！");
	else printf("これは奇数です！");

	return 0;
}