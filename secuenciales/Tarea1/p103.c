#include <stdio.h>

void main() {
	float millas, kilo;
	printf("Ingresa la distancia en millas para pasar a kilometros: ");
	scanf("%f", &millas);

	kilo = millas * 1.609;
	printf("%f millas es %f kilometros \n", millas, kilo);
}		
