#include <stdio.h>

void main() {
	float baseTriangulo, alturaTriangulo, areaTriangulo;
	printf("Ingresa la base del triangulo: ");
	scanf("%f", &baseTriangulo);
	printf("Ingresa la altura del triangulo: ");
	scanf("%f", &alturaTriangulo);
	areaTriangulo = (baseTriangulo * alturaTriangulo) / 2;
	printf("Àrea del triangulo: %.3f \n", areaTriangulo);
}
