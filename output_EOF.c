#include <stdio.h>

int main() {

  int c, proceed_reading = 1;

  while(proceed_reading == 1) {
    if((c = getchar()) == EOF) {
      putchar(c);
      proceed_reading = 0;
      break;
    }
  }

  return 0;
}