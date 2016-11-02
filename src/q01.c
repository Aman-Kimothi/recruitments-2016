#include <stdio.h>

int main() {
  char str[] = "rythm";
  char *p = str;

  printf("%s", p +++ (127 ^ 125));

  return 0;
}
