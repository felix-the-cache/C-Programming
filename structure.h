

#include <climits>
#include <cstring>
#include <string.h>
struct sigrecord {
  int signum;
  char signame[10];
  char sigdec[10];
} sigline, *sigline_p;

void StructureF() {
  sigline.signum = 5;
  strcpy(sigline.signame, "SIGINT");
  strcpy(sigline.sigdec, "Interrupt from keyboard");

  sigline_p = &sigline;

  sigline_p->signum = 5; // pointer operator to call in a struct member
  strcpy(sigline_p->signame, "SIGINT_P");
  strcpy(sigline_p->sigdec, "Interrupt from pointer keyboard");

  enum Jar_Type {
    CUP = 8,
    PINT = 16,
    QUART = 32,
    HALF_GALLON = 64,
    GALLON = 128
  };

  enum { CUPS, GALLONS, MILKS } milk_jug, gas_can, medicine_bottle;
}
