#include <stdio.h>

int main() {

  char arr[5];
  printf("%d %d", sizeof(arr), sizeof(arr+2));

  return 0;
}
