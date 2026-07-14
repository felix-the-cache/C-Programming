#include <cstdint>
#include <stdint.h>
union {
  float f;
  struct {
    uint32_t significan : 23;
    uint32_t exponent : 8;
    uint32_t sign : 1;
  };
} float_encoding;

enum node_type { integer_type, float_type, double_type, long_double_type };

struct node {
  enum node_type node;
  union {
    int inode;
    float fnode;
    double dnode;
    long double ldnode;
  } u;
};
