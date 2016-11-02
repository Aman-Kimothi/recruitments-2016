#include <stdio.h>

int main() {

  int a  = 5, b = 10, c = 17;
  int z = ( (a++ & b++ == 0) || (++a & b) ) || (c ^ b > 0);
  printf("%d%d%d", z, a, b);

  return 0;
}
