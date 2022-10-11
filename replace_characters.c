// Copy input to output, replacing each tab with '\t', each backspace with '\b' and each  '\' with '\\'

#include <stdio.h>

int main() {
	
	int c; 
	while((c = getchar()) != EOF) {
		if(c == '\t') {
			putchar('\\'); putchar('t');
		}
		else if(c == '\b') {
			putchar('\\'); putchar('b');
		}
		else if(c == '\\') {
			putchar('\\'); putchar('\\');
		}
		else {
			putchar(c);
		}
	}

}

