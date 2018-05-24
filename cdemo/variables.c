#include <stdio.h>

int main()
{
	int a;
	int b = 3;
	int c;
	int temp;

	a = 2;
	c = a + b;
	printf("Sum of %d and %d is %d\n", a, b, c);
	temp = a;
	a = c;
	c = temp;
	printf("After Swapping\na = %d\nc = %d\n", a, c);
	
	return 0;	
}
