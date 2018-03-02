#include <stdio.h>

int main(void) {

	char a[6];
	a[0] = 97;
	a[1] = 98;
	a[2] = 99;
	a[3] = 100;
	a[4] = 101;
	a[5] = 0;  //終端文字の文字コードは0

	printf("%s\n", a); //文字列の変換指定子は%s、文字の場合は%c。

	return 0;
}