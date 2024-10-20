#include <stdio.h>

int main() {
	float precioUnitario;

	printf("Ingresa el precio unitario de 1 agua: ");
	scanf("%f", &precioUnitario);
	
	for(int i = 1; i <= 1000; i++) {
		printf("Cantidad %i - Precio %f\n", i, (i * precioUnitario));
	}

	return 0;
}
