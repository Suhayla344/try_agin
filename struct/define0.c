#include <stdio.h>
#define COUCOU() printf("coucou\n"); \
	        printf("iii\n"); \
		printf("yy\n");
int main()
{
	COUCOU()
	return 0;
}
