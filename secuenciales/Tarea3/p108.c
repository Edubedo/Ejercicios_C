// Convertir una velocidad(Horizontal) expresada en nudos(kt) a mt/s(1m/s = 1.9438kt)

#include <stdio.h>

void main() {
	float velocidadKT, velocidadMS;

	printf("Ingresa la velocidad(horizontal) expresada en nudos(kt): ");
	scanf("%f", &velocidadKT);

	velocidadMS = velocidadKT / 1.9438;

	printf("Velocidad: %.4f m/s \n", velocidadMS);

}
