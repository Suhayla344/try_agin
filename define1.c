#include <stdio.h>
#define COUCOU(age) if(age >= 20); \
	            printf("you are adult\n");
int main()
{
	COUCOU(44)
	return 0;
}
