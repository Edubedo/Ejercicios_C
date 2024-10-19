#include <stdio.h>

int main() {
	int a = 0, b = 1, f;

	printf("%d %d ", a, b);
	while(b < 100) {
		f = a + b;
		printf("%i, ", f);
		a = b; 
		b = f;
	}
	printf("\n");

	return 0;
}
