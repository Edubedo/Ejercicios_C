#include <stdio.h>

void main() {
	int edadAnios, edadMeses, totalMeses;

	printf("\tIngresa cuàntos años y meses tienes actualmente.\n");
	printf("Años: ");
	scanf("%i", &edadAnios);
	printf("Meses: ");
	scanf("%i", &edadMeses);

	totalMeses = (edadAnios * 12) + edadMeses;
	printf("Total de meses: %i\n", totalMeses);
}
