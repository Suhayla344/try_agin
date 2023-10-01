#include <stdio.h>

int main() {
	int x;
	puts("give me a new num");
	scanf("%d", &x);
	if (x % 4 == 0) {
		puts("This is an even number");
	}
	else {
		puts("single number");
	}
	return 0;
}
