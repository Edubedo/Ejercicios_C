#include <stdio.h>

void leer3valores(float *a, float *b, float *c) {
	printf("Ingresa el primer valor");
	scanf("%f", a);	
	printf("Ingresa el segundo valor");
	scanf("%f", b);	
	printf("Ingresa el tercer valor");
	scanf("%f", c);	
}

float promedio3(float a, float b, float c) {
	return (a + b + c) / 3;
}

int main() {
	float aa, bb, cc;
	leer3valores(&aa,&bb,&cc);
	
	printf("Promedio: %f\n",promedio3(aa,bb,cc));
	return 0;
}
