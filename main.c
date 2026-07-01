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

  printf("======= Two d Array ======= \n");
  // N-Dimensional arrays
  int twoD[2][2] = {{1, 2}, {3, 4}};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d\n", twoD[i][j]);
    }
  }
  printf("========== Triple Dimension array =========== \n");

  int tripleD[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        printf("%d\n", tripleD[i][j][k]);
      }
    }
  }

  // Wokring on some graphing in the arrays
  printf(" ======== Graphs ======== \n");

  int ga[7][7];
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      if (ga[i][j] == 1) {
        // edge process;
      }
    }
  }

  int rootA[7] = {1, 2, 3, 4, 5, 6, 7};
  int rootI = 0;

  while (rootI < 3) {
    int l = 2 * rootI + 1;
    int r = 2 * rootI + 2;
    printf("Root: %d\n", rootA[rootI]);
    printf("Left Child %d\n", rootA[l]);
    printf("Right Child %d\n", rootA[r]);
    rootI = rootI + 1;
  }

  int testing;
  int testing2;
}
