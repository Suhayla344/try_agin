#include <stdio.h>
#include <string.h>

int main()
{
	char string[] = "Test text";
	char *finedcharct = strpbrk("Test text", "xes");
	if(finedcharct != NULL)
	{
		printf("This is the rest of the string starting by the first occurrence of the characters found : %s", finedcharct);
	}
}

al_namozg
char *strpbrk(const char� string, const char� charactersToFind);
