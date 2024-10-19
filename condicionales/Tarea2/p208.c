#include <stdio.h>

int main() {
	float a,b,c,menor;

	printf("Ingresa el valor de A: ");
	scanf("%f", &a);

	printf("Ingresa el valor de B: ");
	scanf("%f", &b);

	printf("Ingresa el valor de C: ");
	scanf("%f", &c);

	if((a < b) & (a < c)) menor = a;// a es menor
	else if((b < a) & (b < c)) menor = b;// b es menor
	else if((c < b) & (c < a)) menor = c;// c es menor
	else menor = 0;

	printf("El valor menor entre(%.2f,%.2f,%.2f) es: %f", a,b,c,menor);
	return 0;
}
