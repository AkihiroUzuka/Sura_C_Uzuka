﻿#include<stdio.h>

int main(void) {

	int a = 10;
	printf("変数aの中身は、アドレス%pに格納されています", &a);

	return 0;
}
/*
%p...アドレスを表示するための変換指定子
&a...変数aに割り当てられているアドレスを示すための書き方、。
&をアドレス演算子という
*/