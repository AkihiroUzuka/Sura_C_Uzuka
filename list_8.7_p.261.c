#include<stdio.h>

int kokan(int *a, int *b)
{
	int ichiji;

	ichiji = *a;
	*a = *b;
	*b = ichiji;
	printf("koukan関数内での変数のアドレスは%pだよ\n\n", a);

	return 0;
}

int main(void) {

	int a = 100;
	int b = 0;

	printf("交換前は変数aの中身が%dで、変数bの中身が%dです\n", a, b);

	kokan(&a, &b);

	printf("交換後はaの中身が%dで、変数bの中身が%dです\n", a, b);

	printf("main関数内での変数aのアドレスは%pだよ\n", &a);

	return 0;
}