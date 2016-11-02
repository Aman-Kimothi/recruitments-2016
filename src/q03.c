#include <stdio.h>

int main() {

  int i = 0;
  printf("%d%d\n", ((++i % 1) ? i : i + 1), ((i++ % 1) ? i + 1 : i) );

  return 0;
}
