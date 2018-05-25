#include <stdio.h>

int main()
{
int temp;
	int a;
	int* ptrtoa;

	ptrtoa = &a;

	a = 5;
	printf("The value of a is %d\n" , a);

	*ptrtoa = 6;
	printf("The value of a is %d\n" , a);

	printf("The value of ptrtoa is %d\n", ptrtoa);
	printf("It stores the value %d\n", *ptrtoa);
	printf("The address of a is %d\n", &a);

	float d;
	float* ptrtod;

	ptrtod = &d;

	d = 4.22;
	printf("The value of d is %f\n", d);

	*ptrtod = 5;
	printf("The value of d is %f\n", d);

	printf("The value of ptrtod is %d\n", ptrtod);
	printf("It stores the value %f\n", *ptrtod);
	printf("The address of d is %d\n", &d);

	float e;
	float* ptrtoe;

	ptrtoe = &e;

	e = 6.62;
	printf("The value of e is %f\n", e);

	*ptrtoe = 7.35;
	printf("The value of e is %f\n", e);

	printf("The value of ptrtoe is %d\n", ptrtoe);
	printf("It stores the value %f\n", *ptrtoe);
	printf("The address of e is %d\n", &e);

	temp = d;
	d = e;
	e = temp;
	
	printf("After swapping\nd = %f\ne = %f\n", d, e);
}


