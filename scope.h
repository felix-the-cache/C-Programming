#include <stdio.h>
int global = 1000;
int sample(int arg1, int arg2) {
  int loc1, loc2, res1, res2, res3;
  loc1 = 100;
  loc2 = 200;
  // Static variables allow you to retain data until the parent caller function ends -- in this case the main() function.
  static int stat1 = 0;
  res1 = arg1 + arg2;
// block level variable.
  {
    printf("Function local variable: %d", loc1);
    int loc3 = 10;
    int loc4 = 40;
    res2 = loc3 + loc4;
    printf("Inside block: %d", res2);
  }

  // loc3, loc4 will not be accessible
  res3 = loc2 + loc2;
  printf("Outside block: %d", res2);
  stat1 = stat1 + 500;
  global = global + 1000;
  return stat1;
}
