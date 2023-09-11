#include <stdio.h>
#include <string.h>
int main()
{
	char string[] = "text";
	char copy[100] = {0};
	strcpy(copy, string);
	printf("string is : %s\n", string);
	printf("copy is : %s\n", copy);
	return 0;
}
