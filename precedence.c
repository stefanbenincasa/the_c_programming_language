#include <stdio.h>

int main() {
	char c; int i, limit = 10;

	printf("Character Limit: %d\n", limit);
	for(i = 0; (i < limit) * ((c = getchar()) != '\n') * (c != EOF); i++) {
		printf("\nCurrent Index: %d\n", i);
		printf("%c\n", c);
	}

	printf("\nEND\n");

	return 0;
}
