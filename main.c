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

  int s[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *o = s;
  for (int i = 0; i < 10; i++) {
    printf("%d\n", o[i]);
  }

  o[1] = 200;
  for (int i = 0; i < 10; i++) {
    printf("%d\n", o[i]);
  }

  for (int i = 9; i >= 0; i--) {
    printf("%d\n", s[i]);
  }

  int i = 0;
  int j = 0;
  while (i < 20) {
    printf("%d\n", s[j]);
    i = i + 1;
    j = (j + 1) % 10;
  }

  int test[8];
  i = 7;
  while (i != 1) {
    printf("%d\n", s[i]);
    i = i / 2;
  }

  i = 0;
  while (i < 10) {
    printf("%d\n", s[i]);
    i = 2 * (i + 1);
  }
}
