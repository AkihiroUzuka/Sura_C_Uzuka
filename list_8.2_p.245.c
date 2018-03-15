#include<stdio.h>

int main(void) {

	int *pa;
	int a = 10;

	pa = &a;

	printf("変数aのポインタをポインタpaに格納しました\n");
	printf("ポインタpaの中身は、%pです\n", pa);
	printf("変数aのアドレスは、%pです\n", &a);

	return 0;
}
/*
%p...アドレスを表示するための変換指定子
&a...変数aに割り当てられているアドレスを示すための書き方、。
&をアドレス演算子という
*/