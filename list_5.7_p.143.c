#include<stdio.h>

int main(void) {

	for (int a = 1; a <= 10; a = a + 1)
	{
		for (int b = 1; b <= a; b = b + 1)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;

}