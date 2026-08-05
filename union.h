#include <cstdint>
#include <stdint.h>

enum node_type {
  integer_type,
  float_type,
  double_float_type,
  long_double_type
};

struct node {
  enum node_type type;
  union {
    int inode;
    float fnode;
    double dnode;
    long double ldnode;
  } u;
} n;

/*
 n.type = double_type;
 n.u.dnode = 3.14;
 * */
