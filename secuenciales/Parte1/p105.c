#include <stdio.h>
#define PI 3.1416

void main() {
	float grados, radianes;
	printf("Digita los angulos en grados: ");
	scanf("%f", &grados);
	radianes = grados * (PI / 180);
	
	printf("%f grados es igual a %f radianes./", grados, radianes);

}
