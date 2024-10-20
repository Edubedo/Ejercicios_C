#include <stdio.h>

int main() {
	float pulgadas, centimetros;
	
	do {
		printf("Valor en pulgadas: ");
		scanf("%f", &pulgadas);

		if(pulgadas != 0) {
			centimetros = pulgadas * 2.54;
			printf("%.2f pulgadas son %.2f centimetros.\n", pulgadas, centimetros);
		}
	} while(pulgadas != 0);



	return 0;
}
