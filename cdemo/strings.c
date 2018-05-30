#include <stdio.h>
#include <string.h>

int main()
{
	char str1[27];
	char c = 'a';
	for (int i = 0; i < 26; i++)
	{
		str1[i] = c - 32;
		printf("%c\n", c-32);
		c++;
	}

	char str2[] = "abcdefghijklmnopqrstuvwxyz";
	printf("%s\n", str2);

	if (strcmp(str1, str2) == 0)
		printf("the strings are identical\n");
	else
		printf("the strings are different\n");

	
	char str3[54];
	strcpy(str3, str1);
	strcat(str3, str2);
 
	printf("%s + %s = %s\n", str1, str2, str3);

}
