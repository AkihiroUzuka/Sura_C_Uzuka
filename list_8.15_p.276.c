#include <stdio.h>

int main(void) {

	char *a;
	a = "abc";

	printf("abcが格納されているアドレスは%pです\n", a);
	printf("ポインタaが指し示すアドレスの内容は%sです\n\n", a);

	a = "def";

	printf("defが格納されているアドレスは%pです\n", a);
	printf("ポインタaが指し示すアドレスの内容は%sです\n\n", a);


	return 0;
}