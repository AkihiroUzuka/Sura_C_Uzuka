#include <stdio.h>

int main(void) {

	int a = 1;
	int b = 2;

	printf("a‚Ì’†g‚Í%d‚Å‚·\n", a);
	printf("b‚Ì’†g‚Í%d‚Å‚·\n", b);

	a = b;
	printf("a‚Ì’†g‚Í%d‚É‚È‚è‚Ü‚µ‚½", a);

	return 0;
}