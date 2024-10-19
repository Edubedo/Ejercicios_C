#include <stdio.h>

int main() {
	int numero;

	printf("Número: ");
	scanf("%d", &numero);
	
	printf("Divisores de %d: ", numero);
	
	for(int i = 1; i <= numero; i++) {
		if(numero % i == 0) {
			printf("%d\n", i);
		}
	}









	return 0;
}
