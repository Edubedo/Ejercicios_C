#include <stdio.h>

int main() {
	float a,b,c,mayor;

	printf("Ingresa el valor de a: ");
	scanf("%f",&a);
	printf("Ingresa el valor de b: ");
	scanf("%f",&b);
	printf("Ingresa el valor de c: ");
	scanf("%f",&c);

	if((a > b) & (a > c)) mayor = a;
	else if((b > c) & (b > a)) mayor = b;
	else if((c > a) & (c > b)) mayor = c;
	else mayor = 0;

	printf("De los siguientes numeros(%f,%f,%f) es: %f\n", a,b,c,mayor);



}
