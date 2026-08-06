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

  printf("====== String Arrays ====== \n");
  char str1[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

  char str[11];

  for (unsigned int i = 0; i < 10; i++) {
    str[i] = '0' + i;
  }

  str[10] = '\0';
  printf("Strings: %s \n", str);

  void func(int arr[5]);

  unsigned int test = 0;
  unsigned int test2 = 0;

  int arr1[3][4];

  int test3 = arr1[test][test2];

  printf("======== Union types =======\n");

  union Data {
    int i;
    int f;
    char c;
  };

  union Data d;
  d.i = 65;
  printf("%d\n", d.i); // 65
  d.c = 'c';
  printf("Data now changing..... \n");
  printf("%c\n",
         d.c); // c -- but now d.i is garbage as d(Data) memory is overwritten

  const int i = 2;
  // i = 2; // runtime error -- const-qualified
  for (int i = 0; i < 10; i++) {
    printf("I: %d\n", i);
  }

  char *p;
  char arr[42];
  printf("Size of p is: %d\n", p);
  printf("Size of &arr[0]: %d\n",
         sizeof(&arr[0])); // addr to the first element in the array
  printf("Size of arr: %d\n",
         sizeof(arr)); // will print 42 since chars are only one byte
}

struct Test {
  int main;
  char test;
  float fighting;
  union Testing {
    int testing;
    char word_testing;
  };
} *struct_test;
