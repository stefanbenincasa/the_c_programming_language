#include <stdio.h>

int convert_to_celsius(int fahr);

int main() {
  int 
  upper = 300, 
  lower = 0, 
  step = 20,
  fahr = lower,
  celsius; 

  printf("%s\n", "Fahrenheit  Celsius");
  while(fahr <= upper) {
    celsius = convert_to_celsius(fahr);
    printf("%d\t%d\n", fahr, celsius);

    fahr = fahr + step;
  }

  return 0;
}

int convert_to_celsius(int fahr) {
  return 5 * (fahr - 32) / 9;
}
