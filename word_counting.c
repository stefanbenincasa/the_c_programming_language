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

	// This solution does not account for punctuation
	while((c = getchar()) != EOF) {
		if(c == '\n') {
			lines++;
		} 

		if(c == '\n' | c == ' ' | c == '\t') {
			if(state == IN) {
				state = OUT;
			}
		}
		else if(state == OUT){
			state = IN;
			words++;
		}
	}

	printf("\nWord Total: %d\n", words);
}
