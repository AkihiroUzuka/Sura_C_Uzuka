#include <stdio.h>

int ayamaru(int a) {

	for (int i=1;i<=a;i++)
	printf("ごめんなさい\n");
	return 10; 
}



int main(void) {

	int b = 0;

	printf("岡嶋くん、気持ち悪いからあっちに行ってよ\n");
	b = ayamaru(5);
	printf("戻ってきた結果は、%dでした\n\n", b);

	printf("岡嶋くん、また授業中にゲームしていたのかね\n");
	b = ayamaru(2);
	printf("戻ってきた結果は、%dでした\n\n", b);

	printf("岡嶋くん、明日の遠足、ペア組むの嫌だから休んでね\n");
	b = ayamaru(0);
	printf("戻ってきた結果は、%dでした\n\n", b);

	return 0;
}