#include <stdio.h>
#include <stdlib.h>

// Need the stdlib to generate the correct malloc and free functions

double multiplyByTwo(double input) {
  double twice = input * 2.0;
  return twice;
}

int Salary() {
  int age = 30;
  double salary = 12345.67;
  double myList[3] = {1.2, 2.3, 3.4};

  printf("double your salary is %.3f\n", multiplyByTwo(salary));

  return 0;
}

// Heap example
double *multiplyByTwoP(double *input) {
  double *twice = (double *)malloc(sizeof(double));
  *twice = *input * 2.0;
  return twice;
}

int SalaryP() {
  int *age = (int *)malloc(sizeof(int));
  *age = 30;
  double *salary = (double *)malloc(sizeof(double));
  *salary = 12345.67;
  double *myList = (double *)malloc(
      3 * sizeof(double)); // allocating enough for array of size 3
  myList[0] = 1.2;
  myList[1] = 2.3;
  myList[2] = 3.4;
  double *twiceSalary = multiplyByTwoP(salary);

  printf("double your salary %.3f\n", *twiceSalary);

  free(age);
  free(salary);
  free(myList);
}
