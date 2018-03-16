#include<stdio.h>

int main(void) {

	char *a;
	a = "abc";

	printf("absが格納されているアドレスは%pです\n", a);
	printf("ポインタaが指し示すアドレスの内容は%sです\n\n", a);

	return 0;
}