#include <stdio.h>

#define MAXLINE 100
#define n_column_limit 4 

// Track column count
// Column count reached and non-blank read, triggers 'line-break'

int get_line(char line[], int limit);

int main() {
	char line[MAXLINE];
	int	length; 

	while((length = get_line(line, MAXLINE)) > 0) {
	}

	return 0;
}

int get_line(char line[], int limit) {
	int i, c, prev_char = 0, length = 0, column_count = 0;
	int first_word = 1;

	for(i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		if(c != ' ') {
			if(prev_char == 0 || prev_char == ' ') column_count++;
		}

		prev_char = c;
	}

	if(c == '\n') {
		line[i] = c;
		i++;
	}

	length = i;
	line[i] = '\0';

	printf("Column Count: %d\n", column_count);
	return length;
}

