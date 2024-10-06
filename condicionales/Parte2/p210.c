#include <stdio.h>

int main() {
	float a,b,c,menor,medio,mayor;

	printf("Ingresar el valor de a: ");
	scanf("%f",&a);
	printf("Ingresar el valor de b: ");
	scanf("%f",&b);
	printf("Ingresar el valor de c: ");
	scanf("%f",&c);

	// a es mayor
	if((a > b) & (a > c)) {
		mayor = a;
		if(b > c) {
			medio = b;
			menor = c;
		} else {
			medio = c;
			menor = b;
		}
	}
	// b es mayor
	if((b > a) & (b > c)) {
		mayor = b;
		if(a> c) {
			medio = a;
			menor = c;
		} else {
			medio = c;
			menor = a;
		}
	}
	// c es mayor
	if((c > a) & (c > b)) {
		mayor = c;
		if(a> b) {
			medio = a;
			menor = b;
		} else {
			medio = b;
			menor = a;
		}
	}
	
	printf("Orden de valores: (%f,%f,%f)\n",menor,medio,mayor);


	return 0;
}
