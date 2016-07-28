#include <stdio.h>

int main() {
	
	int x = 5;
	{
		int x = x == ++x, y = x;
		y = x++;
		printf("%d %d ", x, y);
	}
	printf("%d", x);

	return 0;
}
