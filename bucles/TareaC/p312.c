#include <stdio.h>

int main() {
	int M, N;

	printf("Valor de M: ");
	scanf("%d", &M);
	printf("Valor de N: ");
	scanf("%d", &N);
	
	printf("Listado de numeros, %i a %i\n", M, N);
	for(int i = M; i <= N; i++){
		(i != N) ? printf("%i, ", i) : printf("%i",i);
	}
	printf("\n");
	return 0;
}
