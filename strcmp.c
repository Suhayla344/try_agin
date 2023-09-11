#include <stdio.h>
#include <string.h>
int main()
{
	char string1[] = "Text text";
	char string2[] = "Text text";
	if (strcmp(string1, string2) == 0)
	{
		printf("the string are identical\n");
	}
	else
	{
		printf("the strings are different\n");
	}
	return 0;
}

al_namozg
int strcmp(const char� string1, const char� string2);
