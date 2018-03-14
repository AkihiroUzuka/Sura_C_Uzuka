#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int answer = 0;

int okkii(int a, int b) {

	if (a > b) answer = a;
	else answer = b;

	return;
}

int main(void) {

	int x = 0;
	int y = 0;
	//int z = 0;

	printf("異なる二つの整数を入力してください\n");
	scanf("%d",&x);
	scanf("%d",&y);

	//z = okkii(x, y);
	okkii(x, y);

	//printf("大きいほうは%dです\n", z);
	printf("大きいほうは%dです\n",answer);

	return 0;
}