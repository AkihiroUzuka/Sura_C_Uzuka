#include<stdio.h>

int a = 100;
int b = 0;

int kokan(int x, int y)
{
	a = y;
	b = x;

	return 0;
}

int main(void) {

	printf("交換前hあ変数aの中身が%dで、変数bの中身は%dです\n", a, b);

	kokan(a, b);

	printf("交換後は変数aの中身が%dで、変数bの中身が%dです\n", a, b);

	return 0;
}