#include "swap0.h"
#include <stdint.h>
#include <stdio.h>

int main(void) {
  int a = 17;
  int b = 55;
  swap(a, b);
  printf("main: a = %d, b = %d\n", a, b);

  swap_pointer(&a, &b);
  printf("main_pointer: a = %d, b = %d\n", a, b);

  char z[5];
  z[0] = 'C';
  printf("z[0] = %c\n", z[0]);

  int *p;
  int f[9];
  p = &f[0];
  *p = 100;  // same as f[0] = 100;
  p = p + 1; // setting *p to the next element in the array. -> f[1]
  *p = 200;  // setting f[1] to 200
  printf("P is -> %d\n", f[0]);
  printf("p[1] is -> %d\n", f[1]);
}
