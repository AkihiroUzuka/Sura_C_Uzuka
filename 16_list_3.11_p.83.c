#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 0;
	int b = 0;
	int c = 0; //ver.2.0 p.84

	printf("掛け算計算機へようこそ！\n");
	printf("かけられる数（整数限定）を入力してください\n");
		scanf("%d", &a);
	printf("かける数(整数限定）を入力してください\n");
		scanf("%d", &b);
		c = a * b; //ver.2.0 p.84
	printf("%dと%dをかけると、%dになります", a, b, c); //ver.2.0 p.84

	return 0;
}