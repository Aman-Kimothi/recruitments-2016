#include <stdio.h>

int main() {
	void swap(int *a, int *b) {
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}

	int a = 5, b = 5;
	int *p = &a, *q = p;
	swap(p, q);
	printf("%d %d", a, b);
	
	return 0;
}
