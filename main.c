#include "arraysC.h"
#include "func.h"
#include "scope.h"
#include <stdint.h>
#include <stdio.h>

int main(void) {

  unsigned int *p;
  char b[9];
  double c[10];

  unsigned int z[4] = {1, 2, 4, 5};

  int arr[4] = {10, 20, 30, 40};
  int *pointer = arr;

  p = z;

  int *l;
  int r[10];

  l = &r[0];

  int *e[100];

  for (int i = 0; i < sizeof(z) / sizeof(z[0]); i++) {
    printf("%u\n", p[i]);
  }
  printf("Address of z: %p\n", &p[0]);

  testingArray(44);

  int o;
  printf("Global: %d", global); // should be 1000
  o = sample(30, 40);
  printf("Global: %d", global);
}

unsigned int TestingArray(int a) { return a; }
