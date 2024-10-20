/*
 *
 *Eduardo Yair Hernàndez Escobedo
 * 1D
 * Algoritmo 201
 * */

#include <stdio.h>

int main() {
	char sexoUno, sexoDos, sexoTres;
	int hombres = 0; int mujeres = 0;
	
	// Leemos el primer sexo
	printf("Ingresa 3 sexos separados por un espacio cada uno \n");

	scanf("%c %c %c", &sexoUno, &sexoDos, &sexoTres);

	sexoUno == 'H' ? (hombres = hombres + 1) : (mujeres = mujeres + 1);
	sexoDos == 'H' ? (hombres = hombres + 1) : (mujeres = mujeres + 1);	
	sexoTres == 'H' ? (hombres = hombres + 1) : (mujeres = mujeres + 1);
		
	printf("Total de hombre %i \nTotal de mujeres: %i\n", hombres, mujeres);
	
	return 0;
}

