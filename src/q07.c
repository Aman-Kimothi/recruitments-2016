#include <stdio.h>

void iter(int *i) {
  static int x = 1;
  x += x + *i;
  printf("%d ", x);
  ++*i;
}

int main() {

  for (int i = 0; i < 5; iter(&i));

  return 0;
}
