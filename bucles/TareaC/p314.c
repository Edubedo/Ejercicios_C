#include <stdio.h>

int main() {
	float r;

	printf("x \t f(x)= \n");
	for(float x = 2; x <= 10; x++) {
		r = 2 * (x*x*x*x) - 3 * (x*x*x) - (x*x) + 3;
		printf("%f \t %f \n", x, r);
	}






	return 0;
}
