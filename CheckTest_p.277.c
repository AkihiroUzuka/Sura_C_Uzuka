#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	float a = 0, b = 0;

	float *pa;
	float *pb;

	pa = &a;//ポインタpaに変数aのアドレス&aを代入
	pb = &b;


	scanf("%f", pa);//*なしでアドレス
	scanf("%f", pb);

	printf("%f", *pa + *pb);//*付きで中身

	return 0;

}