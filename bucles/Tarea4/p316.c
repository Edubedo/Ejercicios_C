#include <stdio.h>
#include <math.h>

int main() {
	
	int N;
	float x,z;
	
	printf("Valor N: ");
	scanf("%i", &N);

	for(x = -10; x <= N; x += 0.5) {
		if(x + 5 == 0) {
			printf("Error de division");
		}
		else {
			z = (4 * pow(x, 4) - 3.5 * pow(x,2)) / (x + 5);
			printf("Z = %.2f\n", z);
		}
	}
	return 0;
}
