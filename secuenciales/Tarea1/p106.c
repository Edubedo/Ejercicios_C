#include <stdio.h>

void main() {
	float farenheit, celsius;

	printf("Digita la temperatura en Farenheit: ");
	scanf("%f", &farenheit);
	celsius = (farenheit - 32) / 1.8;
	printf("%f grados Farenheit son %f Celsius\n", farenheit, celsius);
}
