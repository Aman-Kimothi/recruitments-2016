#include <stdio.h>

int main() {

  printf("%x", ( ((-7 << 28) & 0xffffffff) >> 28) );

  return 0;
}
