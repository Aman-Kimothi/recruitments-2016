#include <stdio.h>

void swap(int *a, int *b) {
  *a ^= *b;
  *b ^= *a;
  *a ^= *b;
}

int main() {
  int a = 5, b = a;
  int *p = &a, *q = p;
  swap(p, q);
  printf("%d %d", a, b);

  return 0;
}
