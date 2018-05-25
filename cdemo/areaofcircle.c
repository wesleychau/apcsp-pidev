#include <stdio.h>

float areaOfCircle(float r)
{
	double A = 3.14*r*r;
	return A;
}

int main()
{

	for (float r=3.5; r<13; r++)
	{
		float area;
		area = areaOfCircle(r);
		printf("Area=%f\n",area);
	}
}
