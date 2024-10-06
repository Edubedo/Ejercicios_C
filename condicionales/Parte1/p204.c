/*
 * Eduardo Yair Hernàndez Escobedo
 * 1D
 * Algoritmo 204
 * */

#include <stdio.h>

int main(){
	float sueldo, impuesto;

	printf("Ingresa el sueldo: ");
	scanf("%f", &sueldo);
	
	if(sueldo < 9800) {
		// 100 80
		// 9800
		impuesto = ((sueldo * 80) / 100);
	}
	else {
		impuesto = ((sueldo *  75) / 100);
	}

	printf("Sueldo neto: %f", impuesto);
	return 0;
}
