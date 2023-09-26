#include <stdio.h>
#include <string.h>

int main()
{
	char str[12];
	char x;
	printf("give me your name :");
	scanf("%s\n", str[12]);
	for (x = str; x < str + 12; x++)
	{
		printf("%d", x);
	}
	return 0;
}
