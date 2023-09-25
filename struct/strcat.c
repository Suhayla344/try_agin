#include <stdio.h>
#include <string.h>
int main()
{
	char string1[100] = "hello\t", string2[] = "mateo21";
	strcat(string1, string2);
	printf("string1 is : %s\n", string1);
	printf("string2 is as always : %s\n", string2);
	return 0;
}

al_namozag
char* strcat(char* string1, const char� string2);
