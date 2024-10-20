#include <stdio.h>

int main() {
	float lado1, lado2, lado3, perimetro;

	do{
		printf("Lado 1:");
		scanf("%f", &lado1);
		printf("Lado 2:");
		scanf("%f", &lado2);
		printf("Lado 3:");
		scanf("%f", &lado3);

		if(lado1==0|lado2==0|lado3==0) {
			break;
		}

		perimetro = lado1+lado2+lado3;
		printf("Perimetro del triangulo: %.2f\n", perimetro);
	} while(lado1 != 0 && lado2 != 0 && lado3 != 0);
	

	return 0;
}	
