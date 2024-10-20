#include <stdio.h>

int main() {
	long double a = 0, b = 1, fib;

	printf("%LF %LF", a, b);
	for(int i = 3; i <= 100; i++) {
		fib = a + b;
		printf("%.0LF, ", fib);
		a = b;
		b = fib;
	}
	printf("\n");
	return 0;
}
