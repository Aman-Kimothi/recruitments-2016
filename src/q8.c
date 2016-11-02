#include <stdio.h>

int main() {

	int sum=0;
	for(int i=1;i<=10;i+=2)  {
		for(int j=0;j<=10;j+=3) {
			if(j%i==0)
				continue;
			else
				sum++;
		}
	}
	printf("%d",sum);

	return 0;
}
