#include <stdio.h>
#include <math.h>

void main() {
	float materia1, materia2, materia3, promedio;

	printf("Calcular promedio: ");
	printf("Ingresa la calificaciòn de la materia 1: ");
	scanf("%f", &materia1);
	
	printf("Ingresa la calificaciòn de la materia 2 ");
	scanf("%f", &materia2);

	printf("Ingresa la calificaciòn de la materia 3: ");
	scanf("%f", &materia3);

	promedio = (materia1 + materia2 + materia3) / 3;
	printf("El promedio de la suma de las 3 materia es: %.3f \n", promedio);
}
