#include <stdio.h>
#include <math.h>


float xalcubo(float x) {
	return pow(x, 2);
}

int main() {	
	float x;

	printf("Ingresa un numero cualquiera: ");
	scanf("%f", &x);
	
	printf("%f\n", xalcubo(x));


	return 0;
}
