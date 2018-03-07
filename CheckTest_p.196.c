#include <stdio.h>

int main(void) {
	char a[95];//94+終端文字。
	
	for (int i = 33; i <= 126; i = i + 1) {

		a[i-33] = i;
		
	}
	a[94] = 0;//終端文字必要

	for (int j = 0; j <= 94; j++) {
		printf("%c", a[j]);
	}

	printf("\n\n");

	printf("%s", a);//この書き方だと配列宣言がintでは上手くいかずcharだと大丈夫。つまり、%sは整数文字コードの配列を直接文字列に変換することはできないっぽい。

	return 0;
}


