#include <stdio.h>

void shakkin(int a[]) {

	for (int i = 0; i < 5; i = i + 1)
	{
		a[i] = a[i] * 2;
	}

	return;
}

int main(void) {

	int b[5] = { 1000, 2000, 3000, 4000, 5000 };

	shakkin(b);

	for (int i = 0; i < 5; i++)
		printf("%d円もお金をかりっましたっけ？？？\n", b[i]);


	return 0;
}