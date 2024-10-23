#include <stdio.h>

int invertirNumero(int numero)  {
	int invertido = 0;
	while(numero != 0) {
		invertido = invertido * 10 + numero % 10;
		numero /= 10;
	}
	return invertido;
}

int main() {
	int numero;
	printf("Ingresa un numero: ");
	scanf("%i", &numero);

	printf("Nùmero invertido: %d\n", invertirNumero(numero));
	return 0;
}
