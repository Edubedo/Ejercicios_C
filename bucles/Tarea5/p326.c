#include <stdio.h>

int main() {
	int numerador, denominador, aux, mcd, a, b;
	printf("Numerador: ");
	scanf("%i", &numerador);
	printf("Ingresa el denominador: ");
	scanf("%i", &denominador);

	a = numerador;
	b = denominador;

	while(b != 0) {
		aux = b;
		b = a % b;
		a = aux;
	}
	
	numerador /= a;
	denominador /= a;

	printf("Fracción simplificada: %d/%d\n", numerador, denominador);

	return 0;
}


