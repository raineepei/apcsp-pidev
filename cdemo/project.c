#include <stdio.h>
#include <string.h>


int main()
{

	int convert;
	float calculation;
	char topic;
	int index = 0;

	char checkDone[10];

	while (1) {

	char input[256];

	printf("What would you like to convert between?\n");

	printf("l\t: Inches/Centimeters\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", &topic);

	if (topic == 'l')
	{
		printf("Enter '1' for Inches to Centimeters or '2' for Centimeters to Inches\n");
		fgets(input, 256, stdin);
		sscanf(input, "%d", &convert);

		if (convert == 1)
		{
			printf("How many inches?\n");
			fgets(input, 256, stdin);
			sscanf(input, "%f", &calculation);
			printf("%f inches is equal to %f centimeters\n", calculation, calculation * 2.54);
		}
		else if (convert == 2)
		{
			printf("How many centimeters?\n");
			fgets(input, 256, stdin);
			sscanf(input, "%f", &calculation);
			printf("%f centimneters is equal to %f inches\n", calculation, calculation * 0.39);
		}
		}


		index ++;

		printf("If you are done, type 'done'. If not, press enter.\n");
		fgets(input, 256, stdin);
		sscanf(input, "%s", checkDone);

		if(strcmp(checkDone, "done") == 0) break;


	}
}
