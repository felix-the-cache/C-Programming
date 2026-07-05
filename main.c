#include "swap0.h"
#include <stdint.h>
#include <stdio.h>

int main(void) {
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
}
