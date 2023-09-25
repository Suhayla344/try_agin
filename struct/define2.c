#include <stdio.h>
#define ADULT(age, name) if(age >= 18); \
			printf("you are adult %s\n", name);
int main()
{
	ADULT(22, "soska")
	return 0;
}
