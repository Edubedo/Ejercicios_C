#include <stdio.h>

int main() {
	float r;

	printf("x\t f(x)\n");

	for(float x = 0.5; x <= 10; x+= 0.5) {
		r = 3.5 * (x*x*x*x*x*x) - 9.536 * (x*x*x*x) + 2.3;
		printf("%.2f \t %.4f\n", x, r);
	}


	return 0;

}
