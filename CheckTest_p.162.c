#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 0;

	printf("��������͂��Ă��������iif�j\n");
	scanf("%d", &a);

	for (int b = 1; b <= a; b += 1) {
		printf("��");
	}

	printf("\n\n��������͂��Ă��������iwhile�j\n");
	scanf("%d", &a);

	while (a!=0) {
		printf("��");
		a -= 1;
			
	}


	return 0;
}