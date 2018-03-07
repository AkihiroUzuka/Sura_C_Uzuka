#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 0;

	printf("整数を入力してください（if）\n");
	scanf("%d", &a);

	for (int b = 1; b <= a; b += 1) {
		printf("♪");
	}

	printf("\n\n整数を入力してください（while）\n");
	scanf("%d", &a);

	while (a!=0) {
		printf("♪");
		a -= 1;
			
	}


	return 0;
}