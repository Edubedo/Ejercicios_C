#include <stdio.h>



char* numeroLetras(int numero) {
	switch(numero) {
		case 1: return "Uno"; break;
		case 2: return "Dos"; break;
		case 3: return "Tres"; break;
		case 4: return "Cuatro"; break;
		case 5: return "Cinco"; break;
		case 6: return "Seis"; break;
		case 7: return "Siete"; break;
		case 8: return "Ocho"; break;
		case 9: return "Nueve"; break;
		case 10: return "Diez"; break;

	}
}

int main() {
	int numero;

	printf("Ingresa un nùmero del 1 al 10: ");
	scanf("%i", &numero);
	
	printf("%s\n", numeroLetras(numero));

	return 0;	
}
