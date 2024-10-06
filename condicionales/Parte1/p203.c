/*
 * Eduardo Yair Hernàndez EScobedo
 * 1D
 * Algoritmo 203
 * */

#include <stdio.h>

int main() {
	float dineroInicialJugar;
	int dadoUno, dadoDos, dados;
	int contador = 0;	
	printf("Ingresa el dinero inicial con el que quieras empezar a jugar dados: ");
	scanf("%f", &dineroInicialJugar);

	// Ronda 1
	if (contador == 0) {
		printf("Ingresa el valor del dado 1:  ");
		scanf("%i", &dadoUno);

		printf("Ingresa el valor del dado 2:  ");
		scanf("%i", &dadoDos);
	
		dados = dadoUno + dadoDos;

		if(dados <= 7) {
			printf("Usted pierde 5\n");
			dineroInicialJugar -= 5;
		}
		else {
			printf("Usted gana 5\n");
			dineroInicialJugar += 5;
		}
	
	}
	contador = contador + 1;


	if(contador == 1) {
		// Ronda 2
		printf("Ingresa el valor del dado 1:  ");
		scanf("%i", &dadoUno);

		printf("Ingresa el valor del dado 2:  ");
		scanf("%i", &dadoDos);
	
		dados = dadoUno + dadoDos;

		if(dados <= 7) {
			printf("Usted pierde 5\n");
			dineroInicialJugar -= 5;
		}
		else {
			printf("Usted gana 5\n");
			dineroInicialJugar += 5;
		}
	}
	
	contador = contador + 1;
	
	if(contador == 2) {
		// Ronda 2
		printf("Ingresa el valor del dado 1:  ");
		scanf("%i", &dadoUno);

		printf("Ingresa el valor del dado 2:  ");
		scanf("%i", &dadoDos);
	
		dados = dadoUno + dadoDos;

		if(dados <= 7) {
			printf("Usted pierde 5\n");
			dineroInicialJugar -= 5;
		}
		else {
			printf("Usted gana 5\n");
			dineroInicialJugar += 5;
		}
	}
	// Mostrar resultado
	printf("Dinero: %f", dineroInicialJugar);	
	
	return 0;
}
