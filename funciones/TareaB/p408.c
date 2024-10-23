#include <stdio.h>

int numeroEsPrimo(int numero) {
	if(numero < 2) return 0;

	for(int i = 2; i * i <= numero; i++) {
		if(numero % i == 0) return 0;
	}
	return 1;
}

void numerosPrimos(int numero) {
	int contador = 0;
	int n = 2;

	while(contador < n)  {
		if(numeroEsPrimo(numero)) {
			printf("%d", n);
			contador++;
		}
		numero++;
	}
	printf("\n");
}

int main() {
	int numero;

	printf("Ingresa una cantidad de numeros primos: ");
	scanf("%i",  &numero);
	
	numerosPrimos(numero);


	return 0;
}
