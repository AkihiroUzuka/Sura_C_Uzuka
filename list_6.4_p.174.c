#include<stdio.h>

int main(void) {

	char a = 'b'; //""だとダメっぽい。0になる。文字列は""、文字は''

	printf("%c\n", a);
	printf("%d\n", a);

	return 0;
}