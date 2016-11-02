#include <stdio.h>

int main() {

	void iter(int *i) {
		static int x = 1;
		x += x + *i;
		printf("%d\n", x);
		++*i;
	}

	for (int i = 0; i < 5; iter(&i));


	return 0;
} 
