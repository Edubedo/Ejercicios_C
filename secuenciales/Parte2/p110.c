#include <stdio.h>
#include <math.h>

void main() {
	float ladoA, ladoB, ladoC, sp, areaT, perimetroT;

	printf("Ingresa el lado A");
	scanf("%f", &ladoA);

	printf("Ingresa el lado B");
	scanf("%f", &ladoB);

	printf("Ingresa el lado C");
	scanf("%f", &ladoC);

	perimetroT = ladoA + ladoB + ladoC;
	sp = perimetroT / 2;

	areaT = sqrt(sp*(sp-ladoA)*(sp-ladoB)*(sp-ladoC));

	printf("Area: %f \n Perimetro: %f \n", areaT, perimetroT);
}
