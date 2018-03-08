#include <stdio.h>

void ayamaru(int a) {

	for (int i=1;i<=a;i++)
	printf("ごめんなさい\n");
	return;
}



int main(void) {



	printf("岡嶋くん、気持ち悪いからあっちに行ってよ\n");
	ayamaru(5);


	printf("岡嶋くん、また授業中にゲームしていたのかね\n");
	ayamaru(2);


	printf("岡嶋くん、明日の遠足、ペア組むの嫌だから休んでね\n");
	ayamaru(0);


	return 0;
}