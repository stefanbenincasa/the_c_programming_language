#include <stdio.h>

#define MAXLINE 100

int set_hex_str(char hex_str[], int limit);
int hex_to_int(char hex);

int main() {
	int int_conversion;
	int length;
	char hex_str[MAXLINE];
	
	while((length = set_hex_str(hex_str, MAXLINE)) > 2) { 
		printf(hex_str);		
	}

	return 0;
}

int set_hex_str(char hex_str[], int limit) {
	int i = 0, length = 0;
	char c;

	hex_str[i] = '0'; 
	hex_str[i+1] = 'x'; 
	i = i + 2;
	length = i;

	for(i = i; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		if((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) { 
			hex_str[i] = c;
		}
		else {
			printf("END\n");
			return 0;
		}
	}

	hex_str[i + 1] = '\0';
	length = i;

	return length;
}

int hex_to_int(char hex) {
	return 0;
}

