#include <stdio.h>

int piramideInvertida(int altura) {
	if(altura <= 0){
		return 1;
	}
	else {	
		altura = altura * 2;
		// Dibujar la piramide invertida
		for(int i = altura + 1; i >= 1; i-=2) { // altura = 5
			// espacios
			for(int j = 1; j <= (altura - i) ; j++) {
				printf(" ");
			}

			// asteriscos
			for(int h = i; h >= 1; h--) {
				printf("*");
			}
			printf("\n");
		}

		
	
		return 0;
	}
}

int main() {
	int alturaPiramide, valPiramide;
	
	printf("Ingresa la altura de la piramide invertida: ");
	scanf("%i", &alturaPiramide);

	valPiramide = piramideInvertida(alturaPiramide);

	if(valPiramide == 1) printf("Valores de entrada invàlidos\n");
	else if(valPiramide == 0) printf("Èxito\n");
	else printf("Error\n");

	return 0;
}
