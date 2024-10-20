#include <stdio.h>

int main() {
	int N, i;
	long factorial = 1;

	printf("Valor N: ");
	scanf("%i", &N);
	
	for(i = 1; i <= N; i++) {
		factorial += i;
	}
	printf("El factorial de %i es: %ld\n", N, factorial);
	return 0;
}
