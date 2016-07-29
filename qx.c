#include <stdio.h>


#define uint32_t unsigned int 
#define uint8_t unsigned char 

uint32_t ce(uint32_t v) {
	uint32_t r = 0;
	r |= (v & 0xFF) << 24;
	r |= (v & 0xFF00) << 8;
	r |= (v & 0xFF0000) >> 8;
	r |= (v & 0xFF000000) >> 24;
	return r;
}

unsigned int
reverse(unsigned int x)
{
    x = (((x & 0xaaaaaaaa) >> 1) | ((x & 0x55555555) << 1));
    x = (((x & 0xcccccccc) >> 2) | ((x & 0x33333333) << 2));
    x = (((x & 0xf0f0f0f0) >> 4) | ((x & 0x0f0f0f0f) << 4));
    x = (((x & 0xff00ff00) >> 8) | ((x & 0x00ff00ff) << 8));
    return((x >> 16) | (x << 16));

}

int main() {

/*
        int a = 5, b = -7, c = 0, d;
        d = ++a && ++b || ++c;
        printf("\n%d%d%d%d", a, b, c, d);

*/

/*
	printf("%x", ( ((-7 << 28) & 0xffffffff) >> 28) );
*/


/*
	//uint32_t a = 0xDEADBEEF;
	uint32_t a = 0xF77DB57B;
	uint32_t b = reverse(a);
	
	uint32_t c = 0x400DB5D8;
	uint32_t d = reverse(c);

	printf("%x %x", b, d);

*/


/*
	uint32_t a = 0xDEADBEEF;
	uint32_t b = ce(a);

	uint32_t c = 0x1BADB002;
	uint32_t d = ce(c);

	printf("%X %X %X\n\n", b, d, a ^ c);

printf("%x", ( ((-7 << 28) & 0xffffffff)) );

*/

static unsigned char lookup[16] = {
0x0, 0x8, 0x4, 0xc, 0x2, 0xa, 0x6, 0xe,
0x1, 0x9, 0x5, 0xd, 0x3, 0xb, 0x7, 0xf, };

uint8_t reverse(uint8_t n) {
   // Reverse the top and bottom nibble then swap them.
   return (lookup[n&0b1111] << 4) | lookup[n>>4];
}
	

	unsigned char a = 'a';


/*
	printf("%c: %X: %X\n\n", 'A', 'A',reverse('A'));
	printf("%c: %X: %X\n\n", 'B', 'B',reverse('B'));
	printf("%c: %X: %X\n\n", 'C', 'C',reverse('C'));
	printf("%c: %X: %X\n\n", 'D', 'D',reverse('D'));
	printf("%c: %X: %X\n\n", 'E', 'E',reverse('E'));
	printf("%c: %X: %X\n\n", 'F', 'F',reverse('F'));
	printf("%c: %X: %X\n\n", 'G', 'G',reverse('G'));
	printf("%c: %X: %X\n\n", 'H', 'H',reverse('H'));
	printf("%c: %X: %X\n\n", 'I', 'I',reverse('I'));
	printf("%c: %X: %X\n\n", 'J', 'J',reverse('J'));
	printf("%c: %X: %X\n\n", 'K', 'K',reverse('K'));
	printf("%c: %X: %X\n\n", 'L', 'L',reverse('L'));
	printf("%c: %X: %X\n\n", 'M', 'M',reverse('M'));
	printf("%c: %X: %X\n\n", 'N', 'N',reverse('N'));
	printf("%c: %X: %X\n\n", 'O', 'O',reverse('O'));
	printf("%c: %X: %X\n\n", 'P', 'P',reverse('P'));
	printf("%c: %X: %X\n\n", 'Q', 'Q',reverse('Q'));
	printf("%c: %X: %X\n\n", 'R', 'R',reverse('R'));
	printf("%c: %X: %X\n\n", 'S', 'S',reverse('S'));
	printf("%c: %X: %X\n\n", 'T', 'T',reverse('T'));
	printf("%c: %X: %X\n\n", 'U', 'U',reverse('U'));
	printf("%c: %X: %X\n\n", 'V', 'V',reverse('V'));
	printf("%c: %X: %X\n\n", 'W', 'W',reverse('W'));
	printf("%c: %X: %X\n\n", 'X', 'X',reverse('X'));
	printf("%c: %X: %X\n\n", 'Y', 'Y',reverse('Y'));
	printf("%c: %X: %X\n\n", 'Z', 'Z',reverse('Z'));

*/

	for (a = 'A'; a <= 'z'; a++) {
		//for (char b = 'A'; b <= 'z'; b++) {
			if (reverse(a) == a) {
				printf("%c,%c\n", a, reverse(a));
			}
		//}
	}

	/*
	printf("\n\n------\n\n");

	for (a = 'a'; a <= 'z'; a++) {
		for (char b = 'a'; b <= 'z'; b++) {
			if (reverse(a) == b) {
				printf("%c,%c : %c\n", a, reverse(a), b);
			}
		}
	}
*/


	return 0;

}
