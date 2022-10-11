#include <stdio.h>

#define IN 1 
#define OUT 0

// Count lines, words, and characters; a word is any sequence of characters without a blank, newline, or tab
int main() {

	char c;

	int 
	words = 0, 
	lines = 0, 
	state = OUT;

	while((c = getchar()) != EOF) {
		if(c == '\n') {
			lines++;
			state = OUT; 	
		} 
		else if(c == ' ' | c == '\t') {
			if(state == IN) { 
				words++;
				state = OUT;
			}
		}
		else {
			state = IN;
		}
	}

	printf("\nThe total amount of words are: %d\n", words);
}
