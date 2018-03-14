#include<stdio.h>
void hairetsu(int a[]) {

	printf("%d %d",a[0],a[1]);
	return;
}

int main(void) {

	int b[2] = { 1,2 };
	hairetsu(b);

	return 0;
}