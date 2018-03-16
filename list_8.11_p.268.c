#include <stdio.h>

void shakkin(int a[]) {

	for (int i = 0; i < 5; i = i + 1)
		printf("%d円お金をかりました\n", a[i]);

	return;
}

int main(void) {

	int b[5] = { 1000, 2000, 3000, 4000, 5000 };

	shakkin(b);//配列名を渡すことで、配列の先頭アドレスへのポインタとして扱われる

	return 0;
}