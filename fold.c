#include <stdio.h>

#define MAXLINE 100
#define COLUMN_LIMIT 4 

// Track column count
// Column count reached and non-blank read, triggers 'line-break'

int get_line(char line[], int limit);
void folded_print(char line[]);

int main() {
	char line[MAXLINE];
	int	length; 

	while((length = get_line(line, MAXLINE)) > 0) {
		folded_print(line);	
	}

	printf("\nEND\n");

	return 0;
}

void folded_print(char line[]) {
	int i, j, c, prev_char = 0, length = 0, column_count = 0;

	printf("\nFolded Lines Column Output:\n");
	for(i = 0; line[i] != '\0'; ++i) {

		if(line[i] != ' ')  {
			if(prev_char == 0 || prev_char == ' ') {
				column_count++;
			}
		}		

		if(column_count <= COLUMN_LIMIT) {
			printf("%c", line[i]);
		}
		else {
			printf("\n%c", line[i]);
			column_count = 0;
		}

		prev_char = line[i];
	}

	printf("\n"); // For tidy output
}

int get_line(char line[], int limit) {
	int i, c, length = 0;

	for(i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
	}

	if(c == '\n') {
		line[i] = c;
		i++;
	}

	length = i;
	line[i] = '\0';

	return length;
}

