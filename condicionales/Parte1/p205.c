/*
 * Eduardo Yair Hernàndez Escobedo
 * 1D
 * Algoritmo 205
 * */

#include <stdio.h>
#include <string.h>

int main() {
	char sexo[20];
	float peso;

	printf("Ingresa tu sexo ('masculino', 'femenino'): ");
	scanf("%s", sexo);

	printf("Ingresa tu peso en libras: ");
	scanf("%f", &peso);
	

	if(strcmp(sexo, "masculino") == 0){
		printf("Calorias necesarias: %f\n", peso * 18);	
	}
	else if(strcmp(sexo, "femenino") == 0) {
		printf("Calorias necesarias: %f\n", peso * 16);	
	} 
	else {
		printf("Opciòn no vàlida\n");
	}
}
