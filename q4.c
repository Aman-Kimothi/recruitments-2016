#include <stdio.h>

int main() {


	unsigned int a = 32, b = 5, c = (a |= 0xA, b = ~b, c = a^(b&0xf));
	// printf("%u, %u, %u", a, b, c);
	printf("%u", c);

	return 0;
}

