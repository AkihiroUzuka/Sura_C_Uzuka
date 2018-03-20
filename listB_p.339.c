#include <stdio.h>

int main(void) {

	printf("char				%dバイト\n", sizeof(char));
	printf("signed char			%dバイト\n", sizeof(signed char));
	printf("unsigned char			%dバイト\n", sizeof(unsigned char));
	printf("short int			%dバイト\n", sizeof(short int));
	printf("unsigned short int		%dバイト\n", sizeof(unsigned short int));
	printf("int				%dバイト\n", sizeof(int));
	printf("unsigned int			%dバイト\n", sizeof(unsigned int));
	printf("long int			%dバイト\n", sizeof(long int));
	printf("unsigned long int		%dバイト\n", sizeof(unsigned long int));
	printf("float				%dバイト\n", sizeof(float));
	printf("double				%dバイト\n", sizeof(double));
	printf("long double			%dバイト\n", sizeof(long double));

	return 0;
}