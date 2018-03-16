#include <stdio.h>

int main(void) {

	char a = 'A'; //シングルクォーテーション
	char *pa;

	pa = &a;
	
	printf("%p", pa);//show the address
	printf("%c", *pa);

	return 0;
}