#include <stdio.h>
#include <math.h>

int main() {
	float numeroUno, numeroDos;

	printf("Ingresa un nùmero: ");
	scanf("%f", &numeroUno);

	printf("Ingresa otro nùmero: ");
	scanf("%f", &numeroDos);

	printf("%f + %f = %f\n", numeroUno, numeroDos, (numeroUno + numeroDos));
	printf("%f - %f = %f\n", numeroUno, numeroDos, (numeroUno - numeroDos));
	printf("%f * %f = %f\n", numeroUno, numeroDos, (numeroUno * numeroDos));
	printf("%f / %f = %f\n", numeroUno, numeroDos, (numeroUno / numeroDos));
	printf("%f **  %f = %f\n", numeroUno, numeroDos, pow(numeroUno, numeroDos));
	return 0;	
}
