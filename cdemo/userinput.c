#include <stdio.h>

float areaOfCircle(float r)
{
	float a;
	a = r * r * 3.14;
	printf("%f\n", a);
	return a;

}

int main(int argc, char* argv[])
{
	float r;
	char input[256], firstnum[256], secondnum[256];

	if (argc != 3)
	{
		printf("%s : expected 2 args, please enter two integers\n", argv[0]);
		return 1;
	}

	int arg1;
	int found = sscanf(argv[1], "%d", &arg1);
	if (found != 1)
	{
		printf("first arg is not an integer, enter two ints\n");
		return 1;
	}

	int arg2;
	found = sscanf(argv[2], "%d", &arg2);
	if (found != 1)
	{
		printf("second arg is not an integer, enter two ints\n");
	return 1;
	}

	printf("great you entered two ints: %d and %d\n", arg1, arg2);

	for (r = arg1; r < arg2; r++)
	{
		areaOfCircle(r);
	}

}
