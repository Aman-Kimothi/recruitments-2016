#include <stdio.h>

int main() {

	int i = 0;

start:
	printf("%d%d", ((++i % 1) ? i : i + 1), ((i++ % 1) ? i + 1 : i) );

	return 0;
}
