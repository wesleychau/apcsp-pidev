#include <stdio.h>

int main()

{
	int a = 12;
	printf("Variable a has a size of %d bytes\n", sizeof(a));

	char b = 9;
	printf("Variable b has a size of %d bytes\n", sizeof(b));

	float c = 12.34;
	printf("Variable c has a size of %d bytes\n", sizeof(c));

	double d = 145.68215;
	printf("Variable d has a size of %d bytes\n", sizeof(d));
}
