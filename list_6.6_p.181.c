#include <stdio.h>

int main(void) {

	char a[6];
	a[0] = 97;
	a[1] = 98;
	a[2] = 99;
	a[3] = 100;
	a[4] = 101;
	a[5] = 0;  //�I�[�����̕����R�[�h��0

	printf("%s\n", a); //������̕ϊ��w��q��%s�A�����̏ꍇ��%c�B

	return 0;
}