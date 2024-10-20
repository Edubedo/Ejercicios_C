#include <stdio.h>

void main() {
	double velocidadKmH, horasTranscurridas, distancia;

	printf("Calcular la distancia recorrida: ");
	printf("Ingresa la velocidad en km/h: ");
	scanf("%lf", &velocidadKmH);

	printf("Ingresa las horas transcurridas: ");
	scanf("%lf", &horasTranscurridas);
	
	distancia = velocidadKmH * horasTranscurridas; // Distancia = km/h * h
	
	printf("Distancia: %f KM\n", distancia);
}
