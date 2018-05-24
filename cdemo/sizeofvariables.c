#include<stdio.h>

int main()
{
	int a = 80;
	char b = 47;
	float c = 44.12;
	double d = 731.4675;
	unsigned e = 62;
	short f = 123;
 
 
	printf("int a value %d (oct %o, hex %x) and size %d bytes.\n", a, a, a, sizeof(a));
	printf("char b value %d (oct %o, hex %x) and size %d bytes.\n", b, b, b, sizeof(b));
	printf("float c value %f and size %d bytes.\n", c, sizeof(c));
	printf("double d value %f and size %d bytes.\n", d, sizeof(d));
	printf("unsigned int e %d (oct %o, hex %x) and size %d bytes.\n", e, e, e, sizeof(e));
	printf("short int f %d (oct %o, hex %x) and size %d bytes.\n", f, f, f, sizeof(f));
}
