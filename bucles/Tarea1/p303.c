#include <stdio.h>

int main() {
	int limite;
	printf("Ingresa un nùmero entero para determinar el lìmite: ");
	scanf("%d", &limite);

	for(int i = 4; i <= limite; i++){
		if(i % 2 == 0) printf("%i, ", i);
	}


	return 0;
}
