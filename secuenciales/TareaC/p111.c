#include <stdio.h>
#include <math.h>

void main() {
	float capdep, cp, tasa, monto, interes;

	printf("\tCalcular el interès \n");
	
	printf("Ingresa el capital depositado: ");
	scanf("%f", &capdep);

	printf("Ingresa la cantidad de periodos: ");
	scanf("%f", &cp);
	
	printf("Ingresa la tasa de interès:");
	scanf("%f", &tasa);
	
	monto = capdep * pow((1 + tasa / 100), cp);

	interes = monto - capdep;

	printf("Interès: %.3f \n", interes);


}
