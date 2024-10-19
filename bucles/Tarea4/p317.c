#include <stdio.h>

int main() {
	int N, suma;

	printf("Valor N: ");
	scanf("%d", &N);

	printf("Número\tResultado del cuadrado obtenido\n");
	for(int i = 1; i <= N; i++) {
		printf("%d\t%d\n", i, (i * i));
	}
	return 0;
}
