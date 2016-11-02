#include <stdio.h>

int main() {

  int x = 5;
  {
    int x = x == ++x;
    printf("%d %d ", x++, x);
  }
  printf("%d", x);

  return 0;
}
