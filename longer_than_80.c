#include <stdio.h>

#define MAXLINE 100

int get_line(char line[], int limit);

int main() {
	// Take input
	// Insert into array
	// Print line IF length is longer 80
	
	char line[MAXLINE];
	int	length; 

	while((length = get_line(line, MAXLINE)) > 0) {
		if(length > 80) {
			printf("\nEntered line is above eighty characters. Printing below...\n", line);
			printf("%s\n", line);
		}
	}

	return 0;
}

int get_line(char line[], int limit) {
	int i, length;
	char c;

	for(i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
	}

	if(c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	length = i;
	return length;
}

