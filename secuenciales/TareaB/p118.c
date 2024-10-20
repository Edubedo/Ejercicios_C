#include <stdio.h>
#include <math.h>


int main() {
	float x, y, z, a, b, c;

	printf("Ingresa el valor para x: ");
	scanf("%f", &x);

	printf("Ingresa el valor para y: ");
	scanf("%f", &y);
	
	printf("Ingresa el valor para z: ");
	scanf("%f", &z);

	a = (x + 5) / (y - 2);
	b = ((sin(x) + cos(y))) / sqrt(z-y);
	c = pow((x-3),2) + 2 * (z - 5) + 3 * pow(y, 3) - 7;

	printf("A: %.2f\n", a);
	printf("B: %.2f\n", b);
	printf("C: %.2f\n", c);

	
return 0;
}
