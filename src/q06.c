#include <stdio.h>

int main() {

  int x = 2;
  int y = 0;
  for ( ; y < 10; ++y) {
    if (y % x == 0)
      continue;
    else if (y == 8)
      break;
    else
      printf("%d ", y);
  }

  return 0;
}
