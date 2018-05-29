#include <stdio.h>

float areaOfCircle(float r)
{
	float a;
	a = r * r * 3.14;
	printf("%f\n", a);
	return a;

}

int main ()
{
	float r;
	for (r = 3.5; r < 12.5; r++)
	{
		areaOfCircle(r);
	}

}
