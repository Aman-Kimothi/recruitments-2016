#include <stdio.h>

int main() {
  int i, j, s = 0;
  for (i = 13; i < 568; i += 17) {
    for (j = 23; j < 750; j += 37) {
      s++;
    }
  }

  printf("%d", s);

  return 0;
}
