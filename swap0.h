
#include <stdio.h>

void swap(int a, int b) {
  int t = a;
  a = b;
  b = t;
  printf("swap: a = %d, b = %d\n", a, b);
}

void swap_pointer(int *pa, int *pb) {
  int t = *pa;
  *pa = *pb;
  *pb = t;
}
