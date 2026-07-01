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
}
