#include <stdio.h>
#include <stdlib.h>

int main()
{
	char string[100] ;
	int age = 15;
	sprintf(string, "you have %d years !", age);
	printf("%s",  string);
}
