#include <stdio.h>

float suma(float a, float b) {
	return a + b;	
}
float resta(float a, float b) {
	return a - b;	
}
float division(float a, float b) {
	return a / b;	
}
float multiplicacion(float a, float b) {
	return a * b;	
}

int main() {
	float n1, n2;
	int opt;

	printf("Ingresa el numero 1: ");
	scanf("%f", &n1);
	printf("Ingresa el numero 2: ");
	scanf("%f", &n2);
	
	printf("\tMenù\n");
	printf("suma(1)\nresta(2)\ndivisiòn(3)\nmultiplicaciòn(4)\nSeleccion la opciòn: ");
	scanf("%i", &opt);
	
	printf("\n");
	switch(opt) {
		case 1: printf("Suma: %f",suma(n1,n2)); break;
		case 2: printf("Resta: %f",resta(n1,n2)); break;
		case 3: printf("Divisiòn: %f",division(n1,n2)); break;	
		case 4: printf("Multiplicaciòn: %f",multiplicacion(n1,n2)); break;
		default: printf("error");
	}
	printf("\n");

	return 0;	
}
