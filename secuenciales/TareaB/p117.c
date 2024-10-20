#include <stdio.h>

int main() {
	int inputMinutos, meses, dias , horas, minutos;

	printf("Ingresa minutos: ");
	scanf("%d", &inputMinutos);

	// Meses
	meses = inputMinutos / (30 * 24 * 60);
	dias = (inputMinutos % (60 * 24 * 30)) / (60 * 24);
	horas = (inputMinutos % (60 * 24)) / 60;
	
	minutos = inputMinutos % 60;

	printf("Meses: %d\n", meses);
	printf("Dias: %d\n", dias);
	printf("Horas: %d\n", horas);
	printf("Minutos: %d\n", minutos);
	return 0;

}
