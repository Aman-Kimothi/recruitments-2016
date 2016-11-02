#include <stdio.h>

unsigned int change_endian(unsigned int x) {
  return (
  (x & 0xff) << 24 |
  (x & 0xff00) << 8 |
  (x & 0xff0000) >> 8 |
  (x & 0xff000000) >> 24
  );
}

int main() {
  unsigned int a = 0xEFBEADDE;
  unsigned int b = 0x02B0AD1B;

  printf("%x", change_endian(a) ^ change_endian(b));
  return 0;
}
