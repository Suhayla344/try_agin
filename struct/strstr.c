#include <stdio.h>
#include <string.h>

int main()
{
	char string[] = "Test text";
	char *findcharct = strstr("Test text", "text");
	if(findcharct != NULL)
	{
		printf("First occurrence of text in Test text : %s\n", findcharct);
	}
}

alnamozg
char� strstr(const char� string, const char� stringToFind)
