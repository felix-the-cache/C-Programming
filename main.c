#include "swap0.h"
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#define N 10
#define TRUE 1
#define FALSE 0

// pointer to a NULL-terminated list of pointers, search the strings in the list
// for a particularr character./
int find_char(char **strings, char value) {
  char *string; // The string we're looking at

  while ((string = *strings++) != NULL) {
    while (*string != '\0') {
      if (*string == value) {
        return TRUE;
      }
    }
  }
  return FALSE;
}

typedef struct {
  char product[10];
  int quantity;
  float unit_price;
  float total_amount;
} Transaction;

typedef struct {
  double d;
  int i;
  char c;
  float f;
} widget;

void print_receipt(Transaction trans) { printf("%s\n", trans.product); }

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

  p = arr;

  printf("First memory for Pointer p: %d\n,lSecond memory storage location for "
         "Pointer p: %d\n",
         p, p + 1);

  printf("Size of int: %d\n", sizeof(int));
  int arr2[] = {2, 4, 6, 8, 10};
  int *pPointer = arr2;
  printf("Where is Pointerp: %d\n", pPointer);
  pPointer += 1;

  printf("Where is Pointerp: %d\n", pPointer);

  /*
   Size of int: 4
Where is Pointerp: 1806576896
Where is Pointerp: 1806576900
*/

  char name[N];

  printf("Enter your first name: ");
  scanf("%s", name);

  printf("Your name is %s\n", name);

  widget *pointerM = malloc(sizeof(*p));
  if (pointerM == NULL) {
    // handle allocation error
  }
  free(pointerM);
  void *vp = malloc(sizeof(int));

  free(vp);
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
