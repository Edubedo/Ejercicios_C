#include <stdio.h>

int main() {	

	printf("impares: ");
	for(int i = 11; i <= 33; i++) {
		if(i % 2 != 0) {
			printf("%i, ", i);
		}
	}

	printf("\npares: ");
	for(int i = 11; i <= 34; i++) {
		if(i % 2 == 0) {
			printf("%i, ", i);
		}
	}

	printf("\n");


	return 0;
}
