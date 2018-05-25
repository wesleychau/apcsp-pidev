#include <stdio.h>
int main()
{
	int a;
	int* ptrtoa;
	ptrtoa = &a;
	a = 5;
	printf("The value of a is %d\n", a);
		*ptrtoa = 6;
	printf("The value of a is %d\n", a);
	printf("The value of ptrtoa is %d\n", ptrtoa);
	printf("It stores the value %d\n", *ptrtoa);
	printf("The address of a is %d\n", &a);

	float d = 1.24;
	float e = 12.45;
	float* ptrtod;
	float* ptrtoe;
	printf("The value of d is %f and its location is %d\n", d, &d);
	printf("The value of e is %f and its location is %d\n", e, &e);
	float temp;
	ptrtod = &d;
	ptrtoe = &e;
	temp = *ptrtoe;
	*ptrtoe = *ptrtod;
	*ptrtod = temp;
	printf("The value of d is %f and its location is %d\n", d, &d);
        printf("The value of e is %f and its location is %d\n", e, &e);
}
