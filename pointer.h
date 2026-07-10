#include <stddef.h> // this allows the NULL macro;

typedef signed char schar_type, *schar_p;
typedef unsigned int
    uint_type; // assigning a type alias to the unsigned type. this can make
               // certain type more clear to readers
void Pointer() {
  int *ip = 0;        // compliant
  char *cp = NULL;    // good
  void *vp = nullptr; // Better

  uint_type i = 17;
  uint_type *intp =
      &i; // using the address of operator to store the address of i
}
