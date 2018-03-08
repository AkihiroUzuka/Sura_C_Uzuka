#include <stdio.h>

void ayamaru(void) {

	printf("ごめんなさい\n\n");
	return; //0はいらない
}



int main(void) {

	printf("岡嶋くん、気持ち悪いからあっちに行ってよ\n");
	ayamaru();

	printf("岡嶋くん、また授業中にゲームしていたのかね\n");
	ayamaru();

	printf("岡嶋くん、明日の遠足、ペア組むの嫌だから休んでね\n");
	ayamaru();

	return 0;
}