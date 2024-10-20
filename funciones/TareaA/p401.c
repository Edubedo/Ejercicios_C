#include <stdio.h>

int tablademultiplicar(int inicio, int fin, int multiplicador) {
	int sumatoria = 0;

	for(int i = inicio; i <= fin; i++) {
		printf("%i * %i = %i\n", multiplicador, i, (multiplicador * i) );
		sumatoria += (multiplicador * i);
	}

	return sumatoria;
}


int main() {
	int inicio, fin, multiplicador, sumatoria;

	printf("Ingresa el numero de inicio: ");
	scanf("%i", &inicio);

	printf("Ingresa el numero de fin: ");
	scanf("%i", &fin);

	printf("Ingresa el numero multiplicador: ");
	scanf("%i", &multiplicador);

	sumatoria = tablademultiplicar(inicio, fin, multiplicador);

	printf("Sumadoria: %i\n", sumatoria);

	return 0;
}

