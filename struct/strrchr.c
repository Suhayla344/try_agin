#include <stdio.h>
#include <string.h>

int main()
{
	char string[] = "Test text";
	char *rest0fstring = NULL;
	rest0fstring = strrchr(string, 's');
	if(rest0fstring != NULL)
	{
		printf("this is the rest of the string after the first s : %s", rest0fstring);
	}
	return 0;
}
