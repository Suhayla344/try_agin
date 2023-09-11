#include <stdio.h>
#include <stdlib.h>

void display(int �table, int tableSize);

int main(int *argc, char *argv[])
{
	int table[4] = {10, 15, 4};

	display(table, 4);
	return (0);
}
void display(int �table, int tableSize)
{
	int i;

	for (i = 0; i < tableSize; i++)
	{
		printf("$d\n", table[i]);
	}
}
