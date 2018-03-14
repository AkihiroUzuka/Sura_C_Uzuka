#include<stdio.h>
void hairetsu(int a[]) {  //const、型修飾子

	a[0] = 10;
	a[1] = 20;
	return;

	}

int main(void) {

	int b[2] = { 1,2 };
	hairetsu(b)	;

	printf("%d %d", b[0], b[1]);

	return 0;
}