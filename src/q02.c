#include <stdio.h>

struct node {
  char val;
  void* ptr;
};

int main() {

  struct node p[2];
  printf("%x", (unsigned int)&p[1] - (unsigned int)p);

  return 0;
}
