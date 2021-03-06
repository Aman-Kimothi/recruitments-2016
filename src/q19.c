#include <stdio.h>

// the brute force approach.
// ... because a computer is doing this.

#define uint32_t unsigned int
#define uint8_t unsigned char

static unsigned char lookup[16] = {
0x0, 0x8, 0x4, 0xc, 0x2, 0xa, 0x6, 0xe,
0x1, 0x9, 0x5, 0xd, 0x3, 0xb, 0x7, 0xf, };

uint8_t reverse(uint8_t n) {
  // Reverse the top and bottom nibble then swap them.
  return (lookup[n&0b1111] << 4) | lookup[n>>4];
}

int main() {
  unsigned char a;

  for (a = 'A'; a <= 'z'; a++) {
    if (reverse(a) == a) {
      printf("%c,%c\n", a, reverse(a));
    }
  }

  return 0;
}
