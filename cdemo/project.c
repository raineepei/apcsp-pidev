#include <stdio.h>
#include <string.h>

int main (int argc, char* argv[])
{
  if (argc != 3)
  {
	printf("%s : expected 2 args\n", argv[0]);
	return 1;
  }

  int arg1;
  int found = sscanf(argv[1], "%d", &arg1);
  if (found != 1)
  {
	printf("first arg is not an integer\n");
	return 1;
  }

  float arg2;
  found = sscanf(argv[2], "%f", &arg2);
  if (found != 1)
  {
	printf("second arg should be a floating\n");
	return 1;
  }

  int convert;
  float calculation;

  convert = arg1;
  calculation = arg2;

  if (convert == 1)
  {
	printf("%f inches is equal to %f centimeters\n", calculation, calculation * 2.54);
  }
  else if (convert == 2)
  {
	printf("%f centimeters is equal to %f inches\n", calculation, calculation / 2.54);
  }

}
