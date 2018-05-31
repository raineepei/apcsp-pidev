#include <stdio.h>
#include <string.h>

struct Student {
	char firstname[20];
	char lastname[20];
	int age;
	int studentid;
};

void printStudent(struct Student* student)
{
	printf("firstname: %s\n", student->firstname);
	printf("lastname: %s\n", student->lastname);
	printf("age: %d\n", student->age);
	printf("studentid: %d\n", student->studentid);

}

int main()
{

	struct Student students[256];
	char checkDone[10];
	int index = 0;

	while (1) {

	  char input[256];

	  printf("What is the student's first name?\n");
	  fgets(input, 256, stdin);
	  sscanf(input, "%s", students[index].firstname);

	  printf("What is the student's last name?\n");
	  fgets(input, 256, stdin);
	  sscanf(input, "%s", students[index].lastname);

	  printf("What is the student's age? \n");
	  fgets(input, 256, stdin);
	  sscanf(input, "%d", &students[index].age);

	  printf("What is their student ID?: \n");
	  fgets(input, 256, stdin);
	  sscanf(input, "%d", &students[index].studentid);

	  index++;

	  printf("If you are done, type 'done'. If not, press enter.\n");
	  fgets(input, 256, stdin);
	  sscanf(input, "%s", checkDone);

	    if(strcmp(checkDone, "done") == 0) break;

	}

	for (int i = 0; i < index; i++) {
	  printStudent(&students[i]);
	}

}
