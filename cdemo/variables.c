#include <stdio.h>

int main()
{
	int a;
	int b = 3;
	int c;

	a = 2;
	c = a + b;
	printf("Sum of %d and %d equals %d\n", a, b, c);

	int d;
	d = a;
	a = c;
	c = d;
	printf("Sum of %d and %d equals %d\n", a, b, c);
}
