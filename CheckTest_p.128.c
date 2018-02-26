#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 0, b = 0;


	printf("貳つの整数の大小判定\n");
	printf("壹つ目の整数を入力してください......");
	scanf("%d", &a);
	

	printf("貳つ目の整数を入力してください......");
	scanf("%d", &b);

	if (a > b) { printf("大きいほうの数は、壹つ目の数\"%d\"です", a); }
	else if (a < b) { printf("大きいほうの数は、貳つ目の数\"%d\"です", b); }
	else if (a == b) { printf("両者は同じ数です"); }


	return 0;


}