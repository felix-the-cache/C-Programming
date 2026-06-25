//
// Created by Felix Vargas Jr on 5/13/26.
//

#ifndef CLOWLEVEL_FUNC_H
#define CLOWLEVEL_FUNC_H

#include <stdio.h>
#define DONE 1
#define NONE 0

int left(int steps, char *action) {

  for (int i = 0; i < steps; i++) {
    printf("L <--");
  }
  printf("\n");

  if (action != NULL) {
    printf("%s\n", action);
    return DONE;
  } else {
    return NONE;
  }
}

int right(int steps, char *action) {
  for (int i = 0; i < steps; i++) {
    printf("R <--");
  }
  printf("\n");
  if (action != NULL) {
    printf("%s\n", action);
    return DONE;
  } else {
    return NONE;
  }
}

int Testing(int right, int left) { return right - left; }

int up(int steps, char *action) {
  for (int i = 0; i < steps; i++) {
    printf("U ^");
  }
  printf("\n");
  if (action != NULL) {
    printf("%s\n", action);
    return DONE;
  } else {
    return NONE;
  }
}

int down(int steps, char *action) {
  for (int i = 0; i < steps; i++) {
    printf("D .");
  }
  printf("\n");
  if (action != NULL) {
    printf("%s\n", action);
    return DONE;
  } else {
    return NONE;
  }
}

#endif // CLOWLEVEL_FUNC_H
