#include <stdio.h>

int main(void) {
	int tabla, inicio, fin;

	printf("\tTablas de multiplicar: \n");
	
	printf("Ingresa la tabla: ");
	scanf("%i", &tabla);

	printf("Ingresa el nùmero de inicio de tabla: ");
	scanf("%i", &inicio);

	printf("Ingresa el nùmero de fin de la tabla");
	scanf("%i", &fin);


	for(int i = inicio; i <= fin; i++) {
	// i = 1 -> i++;
	// i = 2 -> i++:
		printf("%i * %i = %i\n",tabla, i, (tabla * i));
	}	

}
