#include <stdio.h>

int main() {

	char a[] = "STAY FROSTY";
	char *p = a;
	
	while (*p != '\0') {
		printf("%u\n", *p++);
	}
	
	/*
	 * 
	 * 0001 0001
	 * 010
	 */
	
	
	/*
	int a  = 5, b = 10, c = 17;
	// int z = ( (a++ & b++ == 0) && (++a & b) ) || printf("hello");
	int z = ( (a++ & b++ == 0) || (++a & b) ) || (c ^ b > 0);
	printf("%d%d%d", z, a, b);
*/

	return 0;
}
